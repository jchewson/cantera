/* List of functions defined in the module */

static PyMethodDef ct_methods[] = {

    {"phase_temperature", py_temperature,  METH_VARARGS},
    {"phase_density", py_density,  METH_VARARGS},
    {"phase_molardensity", py_molardensity,  METH_VARARGS},
    {"phase_meanmolwt", py_meanmolwt,  METH_VARARGS},
    {"phase_molefraction", py_molefraction,  METH_VARARGS},
    {"phase_massfraction", py_massfraction,  METH_VARARGS},
    {"phase_nelements", py_nelements,  METH_VARARGS},
    {"phase_nspecies", py_nspecies,  METH_VARARGS},
    {"phase_natoms", py_natoms,  METH_VARARGS},
    {"phase_addelement", py_addelement,  METH_VARARGS},
    {"phase_elementindex", py_elementindex,  METH_VARARGS},
    {"phase_speciesindex", py_speciesindex,  METH_VARARGS},
    {"phase_getarray", phase_getarray,  METH_VARARGS},
    {"phase_getstring", phase_getstring,  METH_VARARGS},
    {"phase_setfp", phase_setfp,  METH_VARARGS},
    {"phase_setarray", phase_setarray,  METH_VARARGS},
    {"phase_setstring", phase_setstring,  METH_VARARGS},
    {"phase_report", py_report,  METH_VARARGS},

    {"ThermoFromXML", ct_newThermoFromXML,  METH_VARARGS},
    {"thermo_delete", thermo_delete,  METH_VARARGS},
    {"thermo_mintemp", thermo_mintemp,  METH_VARARGS},
    {"thermo_maxtemp", thermo_maxtemp,  METH_VARARGS},
    {"thermo_thermoIndex", thermo_index,  METH_VARARGS},
    {"thermo_refpressure", thermo_refpressure,  METH_VARARGS},
    {"thermo_getfp", thermo_getfp,  METH_VARARGS},
    {"thermo_setfp", thermo_setfp,  METH_VARARGS},
    {"thermo_getarray", thermo_getarray,  METH_VARARGS},
    {"thermo_equil", thermo_equil,  METH_VARARGS},
    {"thermo_import_xml", thermo_import,  METH_VARARGS},

    {"xml_attrib", py_xml_attrib, METH_VARARGS},
    {"xml_addAttrib", py_xml_addAttrib, METH_VARARGS},
    {"xml_addComment", py_xml_addComment, METH_VARARGS},
    {"xml_tag", py_xml_tag, METH_VARARGS},
    {"xml_value", py_xml_value, METH_VARARGS},
    {"xml_new", py_xml_new, METH_VARARGS},
    {"xml_del", py_xml_del, METH_VARARGS},
    {"xml_build", py_xml_build, METH_VARARGS},
    {"xml_child", py_xml_child, METH_VARARGS},
    {"xml_childbynumber", py_xml_childbynumber, METH_VARARGS},
    {"xml_findID", py_xml_findID, METH_VARARGS},
    {"xml_findByName", py_xml_findByName, METH_VARARGS},
    {"xml_nChildren", py_xml_nChildren, METH_VARARGS},
    {"xml_addChild", py_xml_addChild, METH_VARARGS},
    {"xml_addChildNode", py_xml_addChildNode, METH_VARARGS},
    {"xml_removeChild", py_xml_removeChild, METH_VARARGS},
    {"xml_write", py_xml_write, METH_VARARGS},
    {"ctml_getFloatArray", py_ctml_getFloatArray, METH_VARARGS},

    {"KineticsFromXML", kin_newFromXML,  METH_VARARGS},
    {"kin_delete", kin_delete,  METH_VARARGS},
    {"kin_nspecies", kin_nspecies,  METH_VARARGS},
    {"kin_nreactions", kin_nrxns,  METH_VARARGS},
    {"kin_isreversible", kin_isrev,  METH_VARARGS},
    {"kin_rstoichcoeff", kin_rstoichcoeff,  METH_VARARGS},
    {"kin_pstoichcoeff", kin_pstoichcoeff,  METH_VARARGS},
    {"kin_rxntype", kin_rxntype,  METH_VARARGS},
    {"kin_type", kin_type,  METH_VARARGS},
    {"kin_start", kin_start,  METH_VARARGS},
    {"kin_multiplier", kin_multiplier,  METH_VARARGS},
    {"kin_setMultiplier", kin_setMultiplier,  METH_VARARGS},
    {"kin_speciesIndex", kin_speciesIndex,  METH_VARARGS},
    {"kin_getarray", kin_getarray,  METH_VARARGS},
    {"kin_getstring", kin_getstring,  METH_VARARGS},
    {"kin_phase", kin_phase,  METH_VARARGS},
    {"kin_advanceCoverages", kin_advanceCoverages,  METH_VARARGS},

    {"Transport", py_transport_new,  METH_VARARGS},
    {"tran_delete", py_transport_delete,  METH_VARARGS},
    {"tran_viscosity", py_viscosity,  METH_VARARGS},
    {"tran_thermalConductivity", py_thermalConductivity,  METH_VARARGS},
    {"tran_thermalDiffCoeffs", py_thermalDiffCoeffs,  METH_VARARGS},
    {"tran_binaryDiffCoeffs", py_binaryDiffCoeffs,  METH_VARARGS},
    {"tran_mixDiffCoeffs", py_mixDiffCoeffs,  METH_VARARGS},
    {"tran_multiDiffCoeffs", py_multiDiffCoeffs,  METH_VARARGS},
    {"tran_setParameters", py_setParameters,  METH_VARARGS},
   
    {"get_Cantera_Error", ct_get_cantera_error,  METH_VARARGS},
    {"ct_print", ct_print,  METH_VARARGS},
    {"readlog", ct_readlog,  METH_VARARGS},
    {"ck2ctml", ct_ck2ctml,  METH_VARARGS},
    {"buildSolutionFromXML", ct_buildSolutionFromXML, METH_VARARGS},

    {"Flow", py_flow_new,  METH_VARARGS},
    {"flow_delete", py_flow_delete,  METH_VARARGS},
    {"flow_setupgrid", py_flow_setupgrid,  METH_VARARGS},
    {"flow_setthermo", py_flow_setthermo,  METH_VARARGS},
    {"flow_setkinetics", py_flow_setkinetics,  METH_VARARGS},
    {"flow_settransport", py_flow_settransport,  METH_VARARGS},
    {"flow_setpressure", py_flow_setpressure,  METH_VARARGS},
    {"flow_solvespecies", py_flow_solvespecies,  METH_VARARGS},
    {"flow_settemperature", py_flow_settemperature,  METH_VARARGS},
    {"flow_setenergyfactor", py_flow_setenergyfactor,  METH_VARARGS},
    {"flow_setmassfraction", py_flow_setmassfraction,  METH_VARARGS},
    {"flow_settolerances", py_flow_settolerances,  METH_VARARGS},
    {"flow_energy", py_flow_energy,  METH_VARARGS},
    {"flow_showsolution", py_flow_showsolution,  METH_VARARGS},
    {"flow_resize", py_flow_resize,  METH_VARARGS},
    {"flow_outputtec", py_flow_outputtec,  METH_VARARGS},
    {"flow_restore", py_flow_restore,  METH_VARARGS},
    {"flow_setfixedpoint", py_flow_setfixedpoint,  METH_VARARGS},
    {"flow_setboundaries", py_flow_setboundaries,  METH_VARARGS},
    {"copy", py_copy,  METH_VARARGS},
    {"bdry_new", py_bdry_new,  METH_VARARGS},
    {"bdry_del", py_bdry_delete,  METH_VARARGS},
    {"bdry_set", py_bdry_set,  METH_VARARGS},
    {"onedim_solve", py_onedim_solve,  METH_VARARGS},
    {"onedim_new", py_onedim_new,  METH_VARARGS},
    {"onedim_del", py_onedim_delete,  METH_VARARGS},
    {"onedim_setnewtonoptions", py_onedim_setnewtonoptions,  METH_VARARGS},
    {"onedim_ssnorm", py_onedim_ssnorm,  METH_VARARGS},
    {"onedim_setsteadymode", py_onedim_setsteadymode,  METH_VARARGS},
    {"onedim_settransientmode", py_onedim_settransientmode,  METH_VARARGS},
    {"onedim_eval", py_onedim_eval,  METH_VARARGS},
    {"onedim_addflow", py_onedim_addflow,  METH_VARARGS},
    {"onedim_resize", py_onedim_resize,  METH_VARARGS},
    {"onedim_writestats", py_onedim_writestats,  METH_VARARGS},
    {"onedim_timestep", py_onedim_timestep,  METH_VARARGS},
    {"onedim_save", py_onedim_save,  METH_VARARGS},

    {"surf_setsitedensity", py_surf_setsitedensity,  METH_VARARGS},
    {"surf_sitedensity", py_surf_sitedensity,  METH_VARARGS},
    {"surf_setcoverages", py_surf_setcoverages,  METH_VARARGS},
    {"surf_getcoverages", py_surf_getcoverages,  METH_VARARGS},
    {"surf_setconcentrations", py_surf_setconcentrations,  METH_VARARGS},
    {"surf_getconcentrations", py_surf_getconcentrations,  METH_VARARGS},

    {"rdiag_setDashedColor", py_rdiag_setDashedColor, METH_VARARGS},
    {"rbuild_new", py_rbuild_new, METH_VARARGS},
    {"rdiag_write", py_rdiag_write, METH_VARARGS},
    {"rdiag_setDotOptions", py_rdiag_setDotOptions, METH_VARARGS},
    {"rdiag_setScale", py_rdiag_setScale, METH_VARARGS},
    {"rdiag_setTitle", py_rdiag_setTitle, METH_VARARGS},
    {"rdiag_setArrowWidth", py_rdiag_setArrowWidth, METH_VARARGS},
    {"rdiag_displayOnly", py_rdiag_displayOnly, METH_VARARGS},
    {"rdiag_setThreshold", py_rdiag_setThreshold, METH_VARARGS},
    {"rdiag_setBoldThreshold", py_rdiag_setBoldThreshold, METH_VARARGS},
    {"rdiag_new", py_rdiag_new, METH_VARARGS},
    {"rdiag_del", py_rdiag_del, METH_VARARGS},
    {"rdiag_detailed", py_rdiag_detailed, METH_VARARGS},
    {"rdiag_add", py_rdiag_add, METH_VARARGS},
    {"rdiag_findMajor", py_rdiag_findMajor, METH_VARARGS},
    {"rbuild_build", py_rbuild_build, METH_VARARGS},
    {"rdiag_setNormalThreshold", py_rdiag_setNormalThreshold, METH_VARARGS},
    {"rdiag_brief", py_rdiag_brief, METH_VARARGS},
    {"rbuild_del", py_rbuild_del, METH_VARARGS},
    {"rdiag_setNormalColor", py_rdiag_setNormalColor, METH_VARARGS},
    {"rbuild_init", py_rbuild_init, METH_VARARGS},
    {"rdiag_setBoldColor", py_rdiag_setBoldColor, METH_VARARGS},
    {"rdiag_setFlowType", py_rdiag_setFlowType, METH_VARARGS},
    {"rdiag_setLabelThreshold", py_rdiag_setLabelThreshold, METH_VARARGS},

    {"bndry_temperature", py_bndry_temperature, METH_VARARGS},
    {"bndry_setxin", py_bndry_setxin, METH_VARARGS},
    {"bndry_setxinbyname", py_bndry_setxinbyname, METH_VARARGS},
    {"bndry_settemperature", py_bndry_settemperature, METH_VARARGS},
    {"bndry_setspreadrate", py_bndry_setspreadrate, METH_VARARGS},
    {"bndry_new", py_bndry_new, METH_VARARGS},
    {"bndry_del", py_bndry_del, METH_VARARGS},
    {"bndry_mdot", py_bndry_mdot, METH_VARARGS},
    {"bndry_setmdot", py_bndry_setmdot, METH_VARARGS},

    {"flowdev_ready", py_flowdev_ready, METH_VARARGS},
    {"reactor_setInitialTime", py_reactor_setInitialTime, METH_VARARGS},
    {"flowdev_new", py_flowdev_new, METH_VARARGS},
    {"flowdev_massFlowRate", py_flowdev_massFlowRate, METH_VARARGS},
    {"flowdev_del", py_flowdev_del, METH_VARARGS},
    {"flowdev_setpoint", py_flowdev_setpoint, METH_VARARGS},
    {"reactor_temperature", py_reactor_temperature, METH_VARARGS},
    {"flowdev_setSetpoint", py_flowdev_setSetpoint, METH_VARARGS},
    {"flowdev_install", py_flowdev_install, METH_VARARGS},
    {"reactor_setThermoMgr", py_reactor_setThermoMgr, METH_VARARGS},
    {"reactor_setEnergy", py_reactor_setEnergy, METH_VARARGS},
    {"reactor_volume", py_reactor_volume, METH_VARARGS},
    {"reactor_time", py_reactor_time, METH_VARARGS},
    {"reactor_advance", py_reactor_advance, METH_VARARGS},
    {"reactor_step", py_reactor_step, METH_VARARGS},
    {"flowdev_setParameters", py_flowdev_setParameters, METH_VARARGS},
    {"flowdev_setFunction", py_flowdev_setFunction, METH_VARARGS},
    {"reactor_mass", py_reactor_mass, METH_VARARGS},
    {"reactor_new", py_reactor_new, METH_VARARGS},
    {"reactor_enthalpy_mass", py_reactor_enthalpy_mass, METH_VARARGS},
    {"reactor_pressure", py_reactor_pressure, METH_VARARGS},
    {"reactor_setInitialVolume", py_reactor_setInitialVolume, METH_VARARGS},
    {"reactor_density", py_reactor_density, METH_VARARGS},
    {"reactor_setKineticsMgr", py_reactor_setKineticsMgr, METH_VARARGS},
    {"reactor_del", py_reactor_del, METH_VARARGS},
    {"reactor_intEnergy_mass", py_reactor_intEnergy_mass, METH_VARARGS},
    {"reactor_massFraction", py_reactor_massFraction, METH_VARARGS},
    {"wall_install", py_wall_install, METH_VARARGS},
    {"wall_area", py_wall_area, METH_VARARGS},
    {"wall_setArea", py_wall_setArea, METH_VARARGS},
    {"wall_setThermalResistance", py_wall_setThermalResistance, METH_VARARGS},
    {"wall_setHeatTransferCoeff", py_wall_setHeatTransferCoeff, METH_VARARGS},
    {"wall_setHeatFlux", py_wall_setHeatFlux, METH_VARARGS},
    {"wall_Q", py_wall_Q, METH_VARARGS},
    {"wall_new", py_wall_new, METH_VARARGS},
    {"wall_vdot", py_wall_vdot, METH_VARARGS},
    {"wall_del", py_wall_del, METH_VARARGS},
    {"wall_setExpansionRate", py_wall_setExpansionRate, METH_VARARGS},
    {"wall_setExpansionRateCoeff", py_wall_setExpansionRateCoeff, METH_VARARGS},
    {"wall_ready", py_wall_ready, METH_VARARGS},

    {"func_new", py_func_new, METH_VARARGS},
    {"func_newcombo", py_func_newcombo, METH_VARARGS},
    {"func_del", py_func_del, METH_VARARGS},
    {"func_value", py_func_value, METH_VARARGS},

    {NULL,  NULL}		   /* sentinel */
};

