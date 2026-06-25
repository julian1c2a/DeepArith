import Lake
open Lake DSL

package «DeepArithmetic» where
  -- add package configuration options here
  binDir := "build_tests"

require FOL from "../FOL"

@[default_target]
lean_lib «DeepArithmetic» where
  -- add library configuration options here

lean_exe «tests» where
  root := `Tests
