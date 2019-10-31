{
  "dll_files" : [
    'SATDLL.dll'
  ],  
  "targets": [
    {
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ],
      "target_name": "addon",
      "sources": [ "sat.cpp" ]
    }
  ]
}
