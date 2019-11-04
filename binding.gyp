{ 
  "targets": [
    {
     'link_settings': {
       "libraries" : [
         "C:\\Users\\eduardospagiari\\node-sat-interface\\SATDLL.lib",
     ]},
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ],
      "target_name": "sat",
      "sources": [ "sat.cpp", "helper.cpp" ]
    }
  ]
}
