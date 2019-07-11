// The code in this file is generated from the following code by graphql_ppx

/*

 module SomewhatBadPerfQuery = [%graphql
   {|
 query userDetails($userId: Int!) {
   userById(id: $userId) {
     worker {
       workerUpcomingShifts(
         first: 3
         orderBy: START_DATETIME_ASC
         filter: { shift: { isCancelled: { notEqualTo: true } } }
       ) {
         edges {
           node {
             workerShift {
               workerPayments {
                 edges {
                   node {
                     id
                   }
                 }
               }
             }
           }
         }
       }
     }
   }
 }
 |}
 ];

 */

module SomewhatBadPerfQuery = {
  let ppx_printed_query =
    (
      (
        (
          (
            (
              (
                (
                  (
                    (
                      (
                        (
                          (
                            (
                              (
                                (
                                  (
                                    (
                                      (
                                        (
                                          (
                                            (
                                              (
                                                (
                                                  (
                                                    (
                                                      (
                                                        (
                                                          (
                                                            (
                                                              (
                                                                (
                                                                  (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    (
                                                                    ""
                                                                    ++ "query "
                                                                    )
                                                                    ++ "userDetails"
                                                                    )
                                                                    ++ "($userId: Int!)"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "userById"
                                                                    )
                                                                    ++ "(id: $userId)"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "worker"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "workerUpcomingShifts"
                                                                    )
                                                                    ++ "(first: 3, orderBy: START_DATETIME_ASC, filter: {shift: {isCancelled: {notEqualTo: true}}})"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "edges"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "node"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "workerShift"
                                                                    )
                                                                    ++ "  "
                                                                  )
                                                                  ++ "{\n"
                                                                )
                                                                ++ "workerPayments"
                                                              )
                                                              ++ "  "
                                                            )
                                                            ++ "{\n"
                                                          )
                                                          ++ "edges"
                                                        )
                                                        ++ "  "
                                                      )
                                                      ++ "{\n"
                                                    )
                                                    ++ "node"
                                                  )
                                                  ++ "  "
                                                )
                                                ++ "{\n"
                                              )
                                              ++ "id"
                                            )
                                            ++ "  "
                                          )
                                          ++ "\n"
                                        )
                                        ++ "}\n"
                                      )
                                      ++ "\n"
                                    )
                                    ++ "}\n"
                                  )
                                  ++ "\n"
                                )
                                ++ "}\n"
                              )
                              ++ "\n"
                            )
                            ++ "}\n"
                          )
                          ++ "\n"
                        )
                        ++ "}\n"
                      )
                      ++ "\n"
                    )
                    ++ "}\n"
                  )
                  ++ "\n"
                )
                ++ "}\n"
              )
              ++ "\n"
            )
            ++ "}\n"
          )
          ++ "\n"
        )
        ++ "}\n"
      )
      ++ "\n"
    )
    ++ "}\n";
  let query = ppx_printed_query;
  let parse = value =>
    switch (Js.Json.decodeObject(value)) {
    | None => Js.Exn.raiseError("graphql_ppx: " ++ "Object is not a value")
    | Some(value) =>
      module GQL = {
        [@bs.obj]
        external make_obj: (~userById: 'a0, unit) => {. "userById": 'a0} = "";
      };
      GQL.make_obj(
        ~userById=
          switch (Js.Dict.get(value, "userById")) {
          | Some(value) =>
            switch (Js.Json.decodeNull(value)) {
            | None =>
              Some(
                switch (Js.Json.decodeObject(value)) {
                | None =>
                  Js.Exn.raiseError(
                    "graphql_ppx: " ++ "Object is not a value",
                  )
                | Some(value) =>
                  module GQL = {
                    [@bs.obj]
                    external make_obj:
                      (~worker: 'a0, unit) => {. "worker": 'a0} =
                      "";
                  };
                  GQL.make_obj(
                    ~worker=
                      switch (Js.Dict.get(value, "worker")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None =>
                          Some(
                            switch (Js.Json.decodeObject(value)) {
                            | None =>
                              Js.Exn.raiseError(
                                "graphql_ppx: " ++ "Object is not a value",
                              )

                            | Some(value) =>
                              module GQL = {
                                [@bs.obj]
                                external make_obj:
                                  (~workerUpcomingShifts: 'a0, unit) =>
                                  {. "workerUpcomingShifts": 'a0} =
                                  "";
                              };
                              GQL.make_obj(
                                ~workerUpcomingShifts=
                                  switch (
                                    Js.Dict.get(value, "workerUpcomingShifts")
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeObject(value)) {
                                    | None =>
                                      Js.Exn.raiseError(
                                        "graphql_ppx: "
                                        ++ "Object is not a value",
                                      )

                                    | Some(value) =>
                                      module GQL = {
                                        [@bs.obj]
                                        external make_obj:
                                          (~edges: 'a0, unit) =>
                                          {. "edges": 'a0} =
                                          "";
                                      };
                                      GQL.make_obj(
                                        ~edges=
                                          switch (Js.Dict.get(value, "edges")) {
                                          | Some(value) =>
                                            switch (
                                              Js.Json.decodeArray(value)
                                            ) {
                                            | None =>
                                              Js.Exn.raiseError(
                                                "graphql_ppx: "
                                                ++ "Expected array, got "
                                                ++ Js.Json.stringify(value),
                                              )

                                            | Some(value) =>
                                              Js.Array.map(
                                                value =>
                                                  switch (
                                                    Js.Json.decodeObject(
                                                      value,
                                                    )
                                                  ) {
                                                  | None =>
                                                    Js.Exn.raiseError(
                                                      "graphql_ppx: "
                                                      ++ "Object is not a value",
                                                    )

                                                  | Some(value) =>
                                                    module GQL = {
                                                      [@bs.obj]
                                                      external make_obj:
                                                        (~node: 'a0, unit) =>
                                                        {. "node": 'a0} =
                                                        "";
                                                    };
                                                    GQL.make_obj(
                                                      ~node=
                                                        switch (
                                                          Js.Dict.get(
                                                            value,
                                                            "node",
                                                          )
                                                        ) {
                                                        | Some(value) =>
                                                          switch (
                                                            Js.Json.decodeNull(
                                                              value,
                                                            )
                                                          ) {
                                                          | None =>
                                                            Some(
                                                              switch (
                                                                Js.Json.decodeObject(
                                                                  value,
                                                                )
                                                              ) {
                                                              | None =>
                                                                Js.Exn.raiseError(
                                                                  "graphql_ppx: "
                                                                  ++ "Object is not a value",
                                                                )
                                                              | Some(value) =>
                                                                module GQL = {
                                                                  [@bs.obj]
                                                                  external make_obj:
                                                                    (
                                                                    ~workerShift: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "workerShift": 'a0,
                                                                    } =
                                                                    "";
                                                                };
                                                                GQL.make_obj(
                                                                  ~workerShift=
                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "workerShift",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeNull(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Some(
                                                                    switch (
                                                                    Js.Json.decodeObject(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Object is not a value",
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    module GQL = {
                                                                    [@bs.obj]
                                                                    external make_obj:
                                                                    (
                                                                    ~workerPayments: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "workerPayments": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~workerPayments=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "workerPayments",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeObject(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Object is not a value",
                                                                    )

                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    module GQL = {
                                                                    [@bs.obj]
                                                                    external make_obj:
                                                                    (
                                                                    ~edges: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "edges": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~edges=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "edges",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeArray(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected array, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )

                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    Js.Array.map(
                                                                    value =>

                                                                    switch (
                                                                    Js.Json.decodeObject(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Object is not a value",
                                                                    )

                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    module GQL = {
                                                                    [@bs.obj]
                                                                    external make_obj:
                                                                    (
                                                                    ~node: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "node": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~node=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "node",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeNull(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Some(
                                                                    switch (
                                                                    Js.Json.decodeObject(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Object is not a value",
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    module GQL = {
                                                                    [@bs.obj]
                                                                    external make_obj:
                                                                    (
                                                                    ~id: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "id": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~id=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "id",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) => value

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "id"
                                                                    ++ " on type "
                                                                    ++ "WorkerPayment"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    (),
                                                                    );
                                                                    },
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    (),
                                                                    );
                                                                    },
                                                                    value,
                                                                    )
                                                                    }

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "edges"
                                                                    ++ " on type "
                                                                    ++ "WorkerPaymentsConnection"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    (),
                                                                    );
                                                                    }

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "workerPayments"
                                                                    ++ " on type "
                                                                    ++ "WorkerShift"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    (),
                                                                    );
                                                                    },
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                  (),
                                                                );
                                                              },
                                                            )

                                                          | Some(_) => None
                                                          }

                                                        | None => None
                                                        },
                                                      (),
                                                    );
                                                  },
                                                value,
                                              )
                                            }

                                          | None =>
                                            Js.Exn.raiseError(
                                              "graphql_ppx: "
                                              ++ "Field "
                                              ++ "edges"
                                              ++ " on type "
                                              ++ "WorkerUpcomingShiftsConnection"
                                              ++ " is missing",
                                            )
                                          },
                                        (),
                                      );
                                    }

                                  | None =>
                                    Js.Exn.raiseError(
                                      "graphql_ppx: "
                                      ++ "Field "
                                      ++ "workerUpcomingShifts"
                                      ++ " on type "
                                      ++ "Worker"
                                      ++ " is missing",
                                    )
                                  },
                                (),
                              );
                            },
                          )
                        | Some(_) => None
                        }
                      | None => None
                      },
                    (),
                  );
                },
              )
            | Some(_) => None
            }
          | None => None
          },
        (),
      );
    };
  let make = (~userId, ()) => {
    "query": ppx_printed_query,
    "variables":
      Js.Json.object_(
        Js.Dict.fromArray([|
          ("userId", (v => Js.Json.number(float_of_int(v)))(userId)),
        |]),
      ),
    "parse": parse,
  };

  module type mt_ret = {type t;};
  type typed_ret('a) = (module mt_ret with type t = 'a);
  let ret_type = (type a, f: _ => a): typed_ret(a) => {
    module MT_Ret = {
      type t = a;
    };
    (module MT_Ret);
  };
  module MT_Ret = (val ret_type(parse));
  type t = MT_Ret.t;
};
