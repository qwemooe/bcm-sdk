/** \file jer2_a0_data_port.c
 * 
 * DEVICE DATA - PORT
 * 
 * Device Data
 * SW component that maintains per device data
 * The data is static and won't be changed after device initialization.
 *     
 * Supported data types:
 *     - Define             - a 'uint32' number (a max value for all devices is maintained)
 *     - feature            - 1 bit per each feature (supported/not supported) - support soc properties 
 *     - table              - the data is accessed with keys and/or can maintain multiple values and/or set by soc property
 *     - numeric            - a 'uint32' number that support soc properties
 * 
 * User interface for DNX DATA component can be found in "dnx_data_if.h" and "dnx_data_if_#module#.h"
 * 
 * Adding the data is done via XMLs placed in "tools/autocoder/DeviceData/dnx/.." 
 * "How to" User Guide can be found in confluence. 
 *        
 *     
 * 
 * AUTO-GENERATED BY AUTOCODER!
 * DO NOT EDIT THIS FILE!
 */
/* *INDENT-OFF* */
/*
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 */
#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_PORT
/**
 * \brief
 * Mark this file as device data internal file
 */
#define DNX_DATA_INTERNAL
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/dnx_data_internal_port.h>
#include <soc/dnx/dnx_data/dnx_data_property.h>
#include <bcm/port.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: general
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set numeric fabric_port_base
 * numeric info:
 * first fabric logical port
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     err - see shr_error_e
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
jer2_a0_dnx_data_port_general_fabric_port_base_set(
    int unit)
{
    dnx_data_define_t *define;
    int module_index = dnx_data_module_port;
    int submodule_index = dnx_data_port_submodule_general;
    int define_index = dnx_data_port_general_define_fabric_port_base;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnx_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 256;

    /* Set value */
    define->data = 256;

    /* Set data flags as supported */
    define->flags |= DNX_DATA_F_SUPPORTED;
    /* Property */
    define->property.name = "fabric_logical_port_base";
    define->property.doc = 
        "\n"
        "By default fabric logical ports are 256..(256 + nof links)\n"
        "To extend the logical_port_num range so that ports in range 0...511 can be used, use the following SOC property: fabric_logical_port_base=512.\n"
        "\n"
    ;
    define->property.method = dnx_data_property_method_custom;
    define->property.method_str = "custom";
    SHR_IF_ERR_EXIT(dnx_data_property_port_general_fabric_port_base_read(unit, (uint32 *) &define->data));
    /* Set data flags as property */
    define->flags |= (DNX_DATA_F_PROPERTY);


exit:
    SHR_FUNC_EXIT;
}

/*
 * Tables
 */
/**
 * \brief device level function which set values for table ucode_port
 * Module - 'port', Submodule - 'general', table - 'ucode_port'
 * static port configuration
 * The function set relevant table structure in _dnx_data
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
jer2_a0_dnx_data_port_general_ucode_port_set(
    int unit)
{
    int port_index;
    dnx_data_port_general_ucode_port_t *data, *default_data;
    dnx_data_table_t *table;
    int module_index = dnx_data_module_port;
    int submodule_index = dnx_data_port_submodule_general;
    int table_index = dnx_data_port_general_table_ucode_port;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnx_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNX_DATA_F_SUPPORTED;

    /* Init only data */
    table->flags |= DNX_DATA_F_INIT_ONLY;

    /*
     * Set key sizes
     */
    table->keys[0].size = SOC_MAX_NUM_PORTS;

    /* Info - default values */
    table->values[0].default_val = "BCM_PORT_IF_NULL";
    table->values[1].default_val = "-1";
    /* Store Default Values */
    default_data = (dnx_data_port_general_ucode_port_t *) dnx_data_mgmt_table_data_get(unit, table, -1, -1);
    default_data->interface = BCM_PORT_IF_NULL;
    default_data->interface_offset = -1;
    /* Set Default Values */
    for (port_index = 0; port_index < SOC_MAX_NUM_PORTS; port_index++)
    {
        data = (dnx_data_port_general_ucode_port_t *) dnx_data_mgmt_table_data_get(unit, table, port_index, 0);
        sal_memcpy(data, default_data, table->size_of_values);
    }
    /*
     * Property
     */
    table->property.name = "ucode_port";
    table->property.doc =
        "\n"
        "To map a physical interface and channel to a local logical port and to a core ID and TM port in the core, use the SOC property:\n"
        "ucode_port_#logical_port_num# = #interface_type##interface_id#[.#channel_num#]:core#core-id#.#tm-port#[:#stat#], where:\n"
        "?    logical_port_num is the logical port index.\n"
        "?    interface_type is the Physical Interface type.\n"
        "?    interface_id is the index of the specific physical interface, if applicable.\n"
        "?    channel_num is the channel number within the physical interface, if applicable (relevant for channelized interfaces).\n"
        "?    core-id is the core index, 0 or 1.\n"
        "?    tm-port is the TM port of the core, in range 0?254 (255 is reserved for ERP).\n"
        "?    stat ? add ':stat' to use this logical port as statistics interface (see Statistics Interface section for further details)\n"
        "Example: ucode_port_5 = ILKN1.35:core0.2 maps logical port 5 to Interlaken interface number 1 on channel 35, and to core 0 TM port 2.\n"
        "\n"
    ;
    table->property.method = dnx_data_property_method_custom;
    table->property.method_str = "custom";
    for (port_index = 0; port_index < SOC_MAX_NUM_PORTS; port_index++)
    {
        data = (dnx_data_port_general_ucode_port_t *) dnx_data_mgmt_table_data_get(unit, table, port_index, 0);
        SHR_IF_ERR_EXIT(dnx_data_property_port_general_ucode_port_read(unit, port_index, data));
    }
    /* Set data flags as property */
    table->flags |= (DNX_DATA_F_PROPERTY);

exit:
    SHR_FUNC_EXIT;
}

/*
 * Device attach func
 */
/**
 * \brief Attach device to module - attach set function to data structure
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     err - 
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
jer2_a0_data_port_attach(
    int unit)
{
    dnx_data_module_t *module = NULL;
    dnx_data_submodule_t *submodule = NULL;
    dnx_data_define_t *define = NULL;
    dnx_data_feature_t *feature = NULL;
    dnx_data_table_t *table = NULL;
    int module_index = dnx_data_module_port;
    int submodule_index = -1, data_index = -1;
    SHR_FUNC_INIT_VARS(unit);

    COMPILER_REFERENCE(define);
    COMPILER_REFERENCE(feature);
    COMPILER_REFERENCE(table);
    COMPILER_REFERENCE(submodule);
    COMPILER_REFERENCE(data_index);
    COMPILER_REFERENCE(submodule_index);
    module = &_dnx_data[unit].modules[module_index];
    /*
     * Attach submodule: general
     */
    submodule_index = dnx_data_port_submodule_general;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_port_general_define_fabric_port_base;
    define = &submodule->defines[data_index];
    define->set = jer2_a0_dnx_data_port_general_fabric_port_base_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    data_index = dnx_data_port_general_table_ucode_port;
    table = &submodule->tables[data_index];
    table->set = jer2_a0_dnx_data_port_general_ucode_port_set;

    SHR_FUNC_EXIT;
}
/* *INDENT-ON* */