(*
 * OWL - an OCaml numerical library for scientific computing
 * Copyright (c) 2016-2017 Liang Wang <liang.wang@cl.cam.ac.uk>
 *)


let printers = [
  "Owl.Neural.S.Graph.pp_network";
  "Owl.Neural.D.Graph.pp_network";
  "Owl.Dense.Matrix.Generic.pp_dsmat";
  "Owl.Dense.Ndarray.Generic.pp_dsnda";
  "Owl.Sparse.Matrix.Generic.pp_spmat";
  "Owl.Sparse.Ndarray.Generic.pp_spnda";
]


let install_printers printers =
  List.iter (fun printer ->
    Printf.sprintf "#install_printer %s;;" printer |> Owl_zoo_cmd.eval
  ) printers


let () = install_printers printers
