// The code in this file is generated from the following code by graphql_ppx

/*
 module BadPerfQuery = [%graphql
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
             shiftId
             workerId
             shift {
               business {
                 businessName
               }
               startDatetime
               shiftType {
                 name
               }
             }
             workerShift {
               workerPayments {
                 edges {
                   node {
                     id
                     payoutStatus
                     transferId
                     transferAmount
                     transferStatus
                   }
                 }
               }
               id
               userId
               shift {
                 id
                 shiftType {
                   name
                 }
                 business {
                   businessName
                 }
               }
               canceledAt
               clockedInAt
               clockedOutAt
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

module BadPerfQuery = {
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
                                                                    ++ "shiftId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "workerId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shift"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "business"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "businessName"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "}\n"
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "startDatetime"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shiftType"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "name"
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
                                                                    ++ "payoutStatus"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "transferId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "transferAmount"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "transferStatus"
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
                                                                    ++ "id"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "userId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shift"
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
                                                                    ++ "shiftType"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "name"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "}\n"
                                                                    )
                                                                    ++ "\n"
                                                                  )
                                                                  ++ "business"
                                                                )
                                                                ++ "  "
                                                              )
                                                              ++ "{\n"
                                                            )
                                                            ++ "businessName"
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
                                              ++ "canceledAt"
                                            )
                                            ++ "  "
                                          )
                                          ++ "\n"
                                        )
                                        ++ "clockedInAt"
                                      )
                                      ++ "  "
                                    )
                                    ++ "\n"
                                  )
                                  ++ "clockedOutAt"
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
                                                                    ~shiftId: 'a0,
                                                                    ~workerId: 'a1,
                                                                    ~shift: 'a2,
                                                                    ~workerShift: 'a3,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "shiftId": 'a0,
                                                                    "workerId": 'a1,
                                                                    "shift": 'a2,
                                                                    "workerShift": 'a3,
                                                                    } =
                                                                    "";
                                                                };
                                                                GQL.make_obj(
                                                                  ~shiftId=
                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "shiftId",
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
                                                                    value,
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                  ~workerId=
                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "workerId",
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
                                                                    value,
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                  ~shift=
                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "shift",
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
                                                                    ~business: 'a0,
                                                                    ~startDatetime: 'a1,
                                                                    ~shiftType: 'a2,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "business": 'a0,
                                                                    "startDatetime": 'a1,
                                                                    "shiftType": 'a2,
                                                                    } =

                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~business=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "business",
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
                                                                    ~businessName: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "businessName": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~businessName=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "businessName",
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
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected string, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    value: string
                                                                    )
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

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~startDatetime=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "startDatetime",
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
                                                                    value,
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~shiftType=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "shiftType",
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
                                                                    ~name: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "name": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~name=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "name",
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
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected string, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    value: string
                                                                    )
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

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
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
                                                                    ~id: 'a1,
                                                                    ~userId: 'a2,
                                                                    ~shift: 'a3,
                                                                    ~canceledAt: 'a4,
                                                                    ~clockedInAt: 'a5,
                                                                    ~clockedOutAt: 'a6,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "workerPayments": 'a0,
                                                                    "id": 'a1,
                                                                    "userId": 'a2,
                                                                    "shift": 'a3,
                                                                    "canceledAt": 'a4,
                                                                    "clockedInAt": 'a5,
                                                                    "clockedOutAt": 'a6,
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
                                                                    ~payoutStatus: 'a1,
                                                                    ~transferId: 'a2,
                                                                    ~transferAmount: 'a3,
                                                                    ~transferStatus: 'a4,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "id": 'a0,
                                                                    "payoutStatus": 'a1,
                                                                    "transferId": 'a2,
                                                                    "transferAmount": 'a3,
                                                                    "transferStatus": 'a4,
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
                                                                    ~payoutStatus=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "payoutStatus",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected enum value for "
                                                                    ++ "Status"
                                                                    ++ ", got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )

                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    switch (
                                                                    value
                                                                    ) {
                                                                    | "PENDING" => `PENDING
                                                                    | "FAILED" => `FAILED
                                                                    | "SUCCEEDED" => `SUCCEEDED
                                                                    | "RETRYING" => `RETRYING
                                                                    | _ =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Unknown enum variant for "
                                                                    ++ "Status"
                                                                    ++ ": "
                                                                    ++ value,
                                                                    )
                                                                    }: [
                                                                    | `PENDING
                                                                    | `FAILED
                                                                    | `SUCCEEDED
                                                                    | `RETRYING
                                                                    ]
                                                                    )
                                                                    }

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "payoutStatus"
                                                                    ++ " on type "
                                                                    ++ "WorkerPayment"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    ~transferId=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "transferId",
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
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected string, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    value: string
                                                                    )
                                                                    },
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~transferAmount=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "transferAmount",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeNumber(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected int, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )

                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    int_of_float(
                                                                    value,
                                                                    )
                                                                    }

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "transferAmount"
                                                                    ++ " on type "
                                                                    ++ "WorkerPayment"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    ~transferStatus=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "transferStatus",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    switch (
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected enum value for "
                                                                    ++ "Status"
                                                                    ++ ", got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )

                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    switch (
                                                                    value
                                                                    ) {
                                                                    | "PENDING" => `PENDING
                                                                    | "FAILED" => `FAILED
                                                                    | "SUCCEEDED" => `SUCCEEDED
                                                                    | "RETRYING" => `RETRYING
                                                                    | _ =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Unknown enum variant for "
                                                                    ++ "Status"
                                                                    ++ ": "
                                                                    ++ value,
                                                                    )
                                                                    }: [
                                                                    | `PENDING
                                                                    | `FAILED
                                                                    | `SUCCEEDED
                                                                    | `RETRYING
                                                                    ]
                                                                    )
                                                                    }

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "transferStatus"
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
                                                                    ++ "WorkerShift"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    ~userId=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "userId",
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
                                                                    Js.Json.decodeNumber(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected int, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) =>
                                                                    int_of_float(
                                                                    value,
                                                                    )
                                                                    },
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~shift=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "shift",
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
                                                                    ~shiftType: 'a1,
                                                                    ~business: 'a2,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "id": 'a0,
                                                                    "shiftType": 'a1,
                                                                    "business": 'a2,
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
                                                                    ++ "Shift"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                    ~shiftType=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "shiftType",
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
                                                                    ~name: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "name": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~name=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "name",
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
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected string, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    value: string
                                                                    )
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

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~business=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "business",
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
                                                                    ~businessName: 'a0,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "businessName": 'a0,
                                                                    } =
                                                                    "";
                                                                    };
                                                                    GQL.make_obj(
                                                                    ~businessName=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "businessName",
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
                                                                    Js.Json.decodeString(
                                                                    value,
                                                                    )
                                                                    ) {
                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Expected string, got "
                                                                    ++
                                                                    Js.Json.stringify(
                                                                    value,
                                                                    ),
                                                                    )
                                                                    | Some(
                                                                    value,
                                                                    ) => (
                                                                    value: string
                                                                    )
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

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~canceledAt=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "canceledAt",
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
                                                                    value,
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~clockedInAt=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "clockedInAt",
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
                                                                    value,
                                                                    )

                                                                    | Some(_) =>
                                                                    None
                                                                    }

                                                                    | None =>
                                                                    None
                                                                    },
                                                                    ~clockedOutAt=

                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "clockedOutAt",
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
                                                                    value,
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
