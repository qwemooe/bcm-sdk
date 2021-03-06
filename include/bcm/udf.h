/*
 * $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCM_UDF_H__
#define __BCM_UDF_H__

#include <bcm/types.h>
#include <bcm/field.h>

/* Options to control UDF allocation */
#define BCM_UDF_CREATE_O_NONE           (0)        /* Default. */
#define BCM_UDF_CREATE_O_WITHID         (1 << 0)   /* Use input UDF ID instead
                                                      of allocating one. */
#define BCM_UDF_CREATE_O_REPLACE        (1 << 1)   /* Replace/Update existing
                                                      UDF object. */
#define BCM_UDF_CREATE_O_FLEXHASH       (1 << 2)   /* UDF allocation will be
                                                      adjusted for use by flex
                                                      hashing feature. */
#define BCM_UDF_CREATE_O_FIELD_INGRESS  (1 << 3)   /* UDF allocation will be
                                                      adjusted for use by
                                                      Ingress stage FP. */
#define BCM_UDF_CREATE_O_FIELD_LOOKUP   (1 << 4)   /* UDF allocation will be
                                                      adjusted for use by Lookup
                                                      stage FP. */
#define BCM_UDF_CREATE_O_SHARED_HWID    (1 << 5)   /* Use same hardware
                                                      resources as 'shared_udf' */
#define BCM_UDF_CREATE_O_POLICER_GROUP  (1 << 6)   /* UDF allocation will be
                                                      adjusted for use by global
                                                      (service) meter. */
#define BCM_UDF_CREATE_O_UDFHASH        (1 << 7)   /* UDF allocation will be
                                                      adjusted for use by udf
                                                      hashing feature. */
#define BCM_UDF_CREATE_O_RANGE_CHECK    (1 << 8)   /* UDF allocation will be
                                                      adjusted for use by Range
                                                      checker. */
#define BCM_UDF_CREATE_O_FLEX_COUNTER   (1 << 9)   /* UDF allocation will be
                                                      adjusted for use by
                                                      Flexible Counter. */

/* UDF Packet Format Options */
#define BCM_UDF_PKT_FORMAT_CREATE_O_NONE    0          /* Default. */
#define BCM_UDF_PKT_FORMAT_CREATE_O_WITHID  (1 << 0)   /* Create packet format
                                                          with given ID */
#define BCM_UDF_PKT_FORMAT_CREATE_O_REPLACE (1 << 1)   /* Update existing packet
                                                          format */

/* Packet format options */
typedef uint32 bcm_udf_pkt_format_options_t;

/* Flags to be used with bcm_udf_t.flags */
#define BCM_UDF_F_ADJUST_IP4_OPTIONS    (1 << 1)   /* Adjust offset accounting
                                                      IP4 options */
#define BCM_UDF_F_ADJUST_IP6_OPTIONS    (1 << 2)   /* Adjust offset accounting
                                                      IP6 Extension Headers */

/* Base header the switch can parse. */
typedef enum bcm_udf_layer_e {
    bcmUdfLayerL2Header = 1,        /* Start of L2 header in the Packet */
    bcmUdfLayerL3OuterHeader = 2,   /* Start of outer L3 header in the packet */
    bcmUdfLayerL3InnerHeader = 3,   /* Start of inner L3 header in the packet */
    bcmUdfLayerL4OuterHeader = 4,   /* Start of outer L4 header in the packet */
    bcmUdfLayerL4InnerHeader = 5,   /* Start of outer L4 header in the packet */
    bcmUdfLayerHigigHeader = 6,     /* Start of Higig header in the packet */
    bcmUdfLayerHigig2Header = 7,    /* Start of Higig2 header in the packet */
    bcmUdfLayerTunnelHeader = 8,    /* Start of outermost tunnel header in the
                                       Packet */
    bcmUdfLayerTunnelPayload = 9,   /* Start of outermost tunnel payload in the
                                       Packet */
    bcmUdfLayerUserPayload = 10,    /* Start of application payload in the
                                       Packet. */
    bcmUdfLayerCount                /* Unused. Always last in the list */
} bcm_udf_layer_t;

#define BCM_UDF_LAYER \
{ \
    "L2Header", \
    "L3OuterHeader", \
    "L3InnerHeader", \
    "L4OuterHeader", \
    "L4InnerHeader", \
    "HigigHeader", \
    "Higig2Header", \
    "TunnelHeader", \
    "TunnelPayload", \
    "UserPayload"  \
}

/* UDF structure. */
typedef struct bcm_udf_s {
    uint32 flags;           /* See BCM_UDF_F_XXX */
    bcm_udf_layer_t layer;  /* UDF base offset. bcmUdfLayerXxx */
    int start;              /* Relative offset in bits (from the 'layer') in the
                               packet */
    uint32 width;           /* width of data in bits to extract */
    bcm_pbmp_t ports;       /* ports (must belong to a single pipe) associate
                               with the udf_offset: used only in PipeLocal
                               operation supported devices */
} bcm_udf_t;

/* UDF allocation hints. */
typedef struct bcm_udf_alloc_hints_s {
    uint32 flags;               /* See BCM_UDF_CREATE_O_xxx */
    bcm_udf_id_t shared_udf;    /* Used when BCM_UDF_CREATE_O_SHARED_HWID is set */
    bcm_field_qset_t qset;      /* Field group qset for optimal H/W resource
                                   allocation */
} bcm_udf_alloc_hints_t;

/* Packet format based UDF specification structure. */
typedef struct bcm_udf_pkt_format_info_s {
    int prio;                       /* Priority of the UDF */
    bcm_ethertype_t ethertype;      /* Ethertype in the packet */
    bcm_ethertype_t ethertype_mask; /* Ethertype Mask */
    uint8 ip_protocol;              /* IP protocol field in the packet */
    uint8 ip_protocol_mask;         /* IP protocol Mask */
    uint16 l2;                      /* L2 packet format. (BCM_PKT_FORMAT_L2_XXX) */
    uint16 vlan_tag;                /* Vlan tag format.
                                       (BCM_PKT_FORMAT_VLAN_XXX) */
    uint16 outer_ip;                /* Outer IP header type.
                                       (BCM_PKT_FORMAT_IP_XXX) */
    uint16 inner_ip;                /* Inner IP header type.
                                       (BCM_PKT_FORMAT_IP_XXX) */
    uint16 tunnel;                  /* Tunnel type. (BCM_PKT_FORMAT_TUNNEL_XXX) */
    uint16 mpls;                    /* Mpls labels. (BCM_PKT_FORMAT_MPLS_XXX) */
    uint16 fibre_chan_outer;        /* Fibre Channel outer header type.
                                       (BCM_PKT_FORMAT_FIBRE_CHAN_XXX) */
    uint16 fibre_chan_inner;        /* Fibre Channel inner header
                                       type.(BCM_PKT_FORMAT_FIBRE_CHAN_XXX) */
    uint16 higig;                   /* HIGIG packet
                                       format.(BCM_PKT_FORMAT_HIGIG_XXX) */
    uint16 vntag;                   /* NIV packet
                                       format.(BCM_PKT_FORMAT_VNTAG_XXX) */
    uint16 etag;                    /* Extender tag packet
                                       format.(BCM_PKT_FORMAT_ETAG_XXX) */
    uint16 cntag;                   /* CNTAG packet
                                       format.(BCM_PKT_FORMAT_CNTAG_XXX) */
    uint16 icnm;                    /* ICNM packet
                                       format.(BCM_PKT_FORMAT_ICNM_XXX) */
    uint16 subport_tag;             /* SUBPORT_TAG packet format.
                                       (BCM_PKT_FORMAT_SUBPORT_TAG_XXX) */
    int class_id;                   /* id used by the IFP Key Selection
                                       Mechanism. Range 0~255 */
    uint16 inner_protocol;          /* Inner protocol field in the packet.
                                       Inner_ip should be set to
                                       BCM_PKT_FORMAT_IP_NONE to make this take
                                       effect. IP-IN-IP type GRE should take
                                       original API sequence. */
    uint16 inner_protocol_mask;     /* Inner protocol mask. */
} bcm_udf_pkt_format_info_t;

/* Maxmium bytes of UDF Hash */
#define BCM_UDF_HASH_MAX_LENGTH 4          

/* UDF hashing configuration. */
typedef struct bcm_udf_hash_config_s {
    uint32 flags;                       /* Reserved for future usage. Must be
                                           zero today. */
    bcm_udf_id_t udf_id;                /* UDF object id */
    int mask_length;                    /* Length of mask bytes. Must equal to
                                           the width of the UDF object. */
    uint8 hash_mask[BCM_UDF_HASH_MAX_LENGTH]; /* Array of mask fields. Index 0 is MSB
                                           of mask. */
} bcm_udf_hash_config_t;

/* UDF hashing engine selection. */
#define BCM_UDF_HASH_CONFIG_ENGINE_0    0x00000001 /* UDF is used by hash engine
                                                      0. */
#define BCM_UDF_HASH_CONFIG_ENGINE_1    0x00000002 /* UDF is used by hash engine
                                                      1. */

/* Options to control UDF hashing adding. */
#define BCM_UDF_HASH_ADD_O_NONE     0          /* Default, add new entry to
                                                  list. */
#define BCM_UDF_HASH_ADD_O_REPLACE  (1 << 0)   /* Modify the entry which is
                                                  already in list */

/* Initializes the UDF structure */
extern void bcm_udf_t_init(
    bcm_udf_t *udf_info);

/* Initializes the UDF alloc hints structure */
extern void bcm_udf_alloc_hints_t_init(
    bcm_udf_alloc_hints_t *udf_hints);

/* Initialize the UDF packet format structure */
extern void bcm_udf_pkt_format_info_t_init(
    bcm_udf_pkt_format_info_t *pkt_format);

/* Initialize UDF hashing configuration structure. */
extern void bcm_udf_hash_config_t_init(
    bcm_udf_hash_config_t *info);

#ifndef BCM_HIDE_DISPATCHABLE

/* Initialize UDF module */
extern int bcm_udf_init(
    int unit);

/* Detach UDF module */
extern int bcm_udf_detach(
    int unit);

/* Creates a UDF object */
extern int bcm_udf_create(
    int unit, 
    bcm_udf_alloc_hints_t *hints, 
    bcm_udf_t *udf_info, 
    bcm_udf_id_t *udf_id);

/* Fetches the UDF object created in the system */
extern int bcm_udf_get(
    int unit, 
    bcm_udf_id_t udf_id, 
    bcm_udf_t *udf_info);

/* Fetches all existing UDF ids */
extern int bcm_udf_get_all(
    int unit, 
    int max, 
    bcm_udf_id_t *udf_id_list, 
    int *actual);

/* Destroys the UDF object */
extern int bcm_udf_destroy(
    int unit, 
    bcm_udf_id_t udf_id);

/* Create a packet format entry */
extern int bcm_udf_pkt_format_create(
    int unit, 
    bcm_udf_pkt_format_options_t options, 
    bcm_udf_pkt_format_info_t *pkt_format, 
    bcm_udf_pkt_format_id_t *pkt_format_id);

/* Retrieve packet format info given the packet format Id */
extern int bcm_udf_pkt_format_info_get(
    int unit, 
    bcm_udf_pkt_format_id_t pkt_format_id, 
    bcm_udf_pkt_format_info_t *pkt_format);

/* Destroy existing packet format entry */
extern int bcm_udf_pkt_format_destroy(
    int unit, 
    bcm_udf_pkt_format_id_t pkt_format_id);

/* Adds packet format entry to UDF object */
extern int bcm_udf_pkt_format_add(
    int unit, 
    bcm_udf_id_t udf_id, 
    bcm_udf_pkt_format_id_t pkt_format_id);

/* Deletes packet format spec associated with the UDF */
extern int bcm_udf_pkt_format_get(
    int unit, 
    bcm_udf_pkt_format_id_t pkt_format_id, 
    int max, 
    bcm_udf_id_t *udf_id_list, 
    int *actual);

/* Deletes packet format spec associated with the UDF */
extern int bcm_udf_pkt_format_delete(
    int unit, 
    bcm_udf_id_t udf_id, 
    bcm_udf_pkt_format_id_t pkt_format_id);

/* Retrieves the user defined format specification configuration from UDF */
extern int bcm_udf_pkt_format_get_all(
    int unit, 
    bcm_udf_id_t udf_id, 
    int max, 
    bcm_udf_pkt_format_id_t *pkt_format_id_list, 
    int *actual);

/* Deletes all packet format specs associated with the UDF */
extern int bcm_udf_pkt_format_delete_all(
    int unit, 
    bcm_udf_id_t udf_id);

/* Add UDF id into hashing list and configure it. */
extern int bcm_udf_hash_config_add(
    int unit, 
    uint32 options, 
    bcm_udf_hash_config_t *config);

/* Delete UDF id from hashing list. */
extern int bcm_udf_hash_config_delete(
    int unit, 
    bcm_udf_hash_config_t *config);

/* Delete all UDF id from hashing list. */
extern int bcm_udf_hash_config_delete_all(
    int unit);

/* Get UDF hashing configuration of a certain id. */
extern int bcm_udf_hash_config_get(
    int unit, 
    bcm_udf_hash_config_t *config);

/* Get all added UDF ids from list. */
extern int bcm_udf_hash_config_get_all(
    int unit, 
    int max, 
    bcm_udf_hash_config_t *config_list, 
    int *actual);

#endif /* BCM_HIDE_DISPATCHABLE */

/* 
 * List of UDF operational modes supported: used only in PipeLocal
 * operation supported devices
 */
typedef enum bcm_udf_oper_mode_e {
    bcmUdfOperModeGlobal = 0,       /* UDF Operational Global Mode Value. */
    bcmUdfOperModePipeLocal = 1,    /* UDF Operational Pipe Local Mode Value. */
    bcmUdfOperModeCount = 2         /* Always last. Not a usable value. */
} bcm_udf_oper_mode_t;

#define BCM_UDF_OPER_MODE_STRINGS \
{ \
    "Global", \
    "PipeLocal"  \
}

#ifndef BCM_HIDE_DISPATCHABLE

/* 
 * Configure udf operation mode: used only in PipeLocal operation
 * supported devices
 */
extern int bcm_udf_oper_mode_set(
    int unit, 
    bcm_udf_oper_mode_t mode);

/* 
 * Retrieves current udf operation mode: used only in PipeLocal operation
 * supported devices
 */
extern int bcm_udf_oper_mode_get(
    int unit, 
    bcm_udf_oper_mode_t *mode);

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_UDF_H__ */
