
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name HexCounter -dir "/home/maxwell/GitHub/TrabajoSED/HexCounter/planAhead_run_2" -part xc3s200ft256-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/maxwell/GitHub/TrabajoSED/HexCounter/TOP_HEXCOUNTER.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/maxwell/GitHub/TrabajoSED/HexCounter} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "TOP_HEXCOUNTER.ucf" [current_fileset -constrset]
add_files [list {TOP_HEXCOUNTER.ucf}] -fileset [get_property constrset [current_run]]
link_design
