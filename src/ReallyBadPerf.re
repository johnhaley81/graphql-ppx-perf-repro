// The code in this file is generated from the following code by graphql_ppx

/*

 module ReallyBadPerfQuery = [%graphql {|
 query userDetails($userId: Int!) {
   userById(id: $userId) {
     id
     firstName
     lastName
     phoneNumber
     email
     profileableType
     textMessageOptedOutAt
     city {
       code
       timezone
     }
     communication {
       communicationPhoneNumber: phoneNumber
     }
     extension {
       mobileCarrier
       mobileNetworkCode
       phoneType
     }
     worker {
       activeId
       alcoholAwarenessExpirationDate
       foodHandlersExpirationDate
       id
       ineligibleStatus
       runningBalance
       details {
         averageRatingFromBusinessOverall
         fohQwickScore
         fohQwickScorePercentile
         fohRating: fohAverageRating
         bohQwickScore
         bohQwickScorePercentile
         bohRating: bohAverageRating
         attendedOrienationAt
         stripeMerchantAccountId
         blocked: businessesWithLowRatings
         experiences: workerExperience
         numberOfShiftsOverall
         shiftNoShows
         shift4HourCancellations
         shift24HourCancellations
         overallCancellations
       }
       workerAvailableShifts(first: 5, orderBy: START_DATETIME_ASC) {
         edges {
           node {
             workerId
             shiftId
             shift {
               business {
                 businessName
               }
               startDatetime
               shiftType {
                 name
               }
             }
           }
         }
       }
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
       workerPastShifts(first: 3, orderBy: START_DATETIME_DESC) {
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

module ReallyBadPerfQuery = {
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
                                                                    ++ "id"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "firstName"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "lastName"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "phoneNumber"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "email"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "profileableType"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "textMessageOptedOutAt"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "city"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "code"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "timezone"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "}\n"
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "communication"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "communicationPhoneNumber: "
                                                                    )
                                                                    ++ "phoneNumber"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "}\n"
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "extension"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "mobileCarrier"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "mobileNetworkCode"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "phoneType"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "}\n"
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "worker"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "activeId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "alcoholAwarenessExpirationDate"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "foodHandlersExpirationDate"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "id"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "ineligibleStatus"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "runningBalance"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "details"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "{\n"
                                                                    )
                                                                    ++ "averageRatingFromBusinessOverall"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "fohQwickScore"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "fohQwickScorePercentile"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "fohRating: "
                                                                    )
                                                                    ++ "fohAverageRating"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "bohQwickScore"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "bohQwickScorePercentile"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "bohRating: "
                                                                    )
                                                                    ++ "bohAverageRating"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "attendedOrienationAt"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "stripeMerchantAccountId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "blocked: "
                                                                    )
                                                                    ++ "businessesWithLowRatings"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "experiences: "
                                                                    )
                                                                    ++ "workerExperience"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "numberOfShiftsOverall"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shiftNoShows"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shift4HourCancellations"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shift24HourCancellations"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "overallCancellations"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "}\n"
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "workerAvailableShifts"
                                                                    )
                                                                    ++ "(first: 5, orderBy: START_DATETIME_ASC)"
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
                                                                    ++ "workerId"
                                                                    )
                                                                    ++ "  "
                                                                    )
                                                                    ++ "\n"
                                                                    )
                                                                    ++ "shiftId"
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
                                                                    ++ "workerPastShifts"
                                                                    )
                                                                    ++ "(first: 3, orderBy: START_DATETIME_DESC)"
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
                      (
                        ~id: 'a0,
                        ~firstName: 'a1,
                        ~lastName: 'a2,
                        ~phoneNumber: 'a3,
                        ~email: 'a4,
                        ~profileableType: 'a5,
                        ~textMessageOptedOutAt: 'a6,
                        ~city: 'a7,
                        ~communication: 'a8,
                        ~extension: 'a9,
                        ~worker: 'a10,
                        unit
                      ) =>
                      {
                        .
                        "id": 'a0,
                        "firstName": 'a1,
                        "lastName": 'a2,
                        "phoneNumber": 'a3,
                        "email": 'a4,
                        "profileableType": 'a5,
                        "textMessageOptedOutAt": 'a6,
                        "city": 'a7,
                        "communication": 'a8,
                        "extension": 'a9,
                        "worker": 'a10,
                      } =
                      "";
                  };
                  GQL.make_obj(
                    ~id=
                      switch (Js.Dict.get(value, "id")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNumber(value)) {
                        | None =>
                          Js.Exn.raiseError(
                            "graphql_ppx: "
                            ++ "Expected int, got "
                            ++ Js.Json.stringify(value),
                          )
                        | Some(value) => int_of_float(value)
                        }
                      | None =>
                        Js.Exn.raiseError(
                          "graphql_ppx: "
                          ++ "Field "
                          ++ "id"
                          ++ " on type "
                          ++ "User"
                          ++ " is missing",
                        )
                      },
                    ~firstName=
                      switch (Js.Dict.get(value, "firstName")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None =>
                          Some(
                            switch (Js.Json.decodeString(value)) {
                            | None =>
                              Js.Exn.raiseError(
                                "graphql_ppx: "
                                ++ "Expected string, got "
                                ++ Js.Json.stringify(value),
                              )

                            | Some(value) => (value: string)
                            },
                          )
                        | Some(_) => None
                        }
                      | None => None
                      },
                    ~lastName=
                      switch (Js.Dict.get(value, "lastName")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None =>
                          Some(
                            switch (Js.Json.decodeString(value)) {
                            | None =>
                              Js.Exn.raiseError(
                                "graphql_ppx: "
                                ++ "Expected string, got "
                                ++ Js.Json.stringify(value),
                              )

                            | Some(value) => (value: string)
                            },
                          )
                        | Some(_) => None
                        }
                      | None => None
                      },
                    ~phoneNumber=
                      switch (Js.Dict.get(value, "phoneNumber")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None =>
                          Some(
                            switch (Js.Json.decodeString(value)) {
                            | None =>
                              Js.Exn.raiseError(
                                "graphql_ppx: "
                                ++ "Expected string, got "
                                ++ Js.Json.stringify(value),
                              )
                            | Some(value) => (value: string)
                            },
                          )
                        | Some(_) => None
                        }
                      | None => None
                      },
                    ~email=
                      switch (Js.Dict.get(value, "email")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None =>
                          Some(
                            switch (Js.Json.decodeString(value)) {
                            | None =>
                              Js.Exn.raiseError(
                                "graphql_ppx: "
                                ++ "Expected string, got "
                                ++ Js.Json.stringify(value),
                              )

                            | Some(value) => (value: string)
                            },
                          )
                        | Some(_) => None
                        }
                      | None => None
                      },
                    ~profileableType=
                      switch (Js.Dict.get(value, "profileableType")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None =>
                          Some(
                            switch (Js.Json.decodeString(value)) {
                            | None =>
                              Js.Exn.raiseError(
                                "graphql_ppx: "
                                ++ "Expected string, got "
                                ++ Js.Json.stringify(value),
                              )
                            | Some(value) => (value: string)
                            },
                          )

                        | Some(_) => None
                        }
                      | None => None
                      },
                    ~textMessageOptedOutAt=
                      switch (Js.Dict.get(value, "textMessageOptedOutAt")) {
                      | Some(value) =>
                        switch (Js.Json.decodeNull(value)) {
                        | None => Some(value)
                        | Some(_) => None
                        }
                      | None => None
                      },
                    ~city=
                      switch (Js.Dict.get(value, "city")) {
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
                                  (~code: 'a0, ~timezone: 'a1, unit) =>
                                  {
                                    .
                                    "code": 'a0,
                                    "timezone": 'a1,
                                  } =
                                  "";
                              };
                              GQL.make_obj(
                                ~code=
                                  switch (Js.Dict.get(value, "code")) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
                                        },
                                      )

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~timezone=
                                  switch (Js.Dict.get(value, "timezone")) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
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
                    ~communication=
                      switch (Js.Dict.get(value, "communication")) {
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
                                  (~communicationPhoneNumber: 'a0, unit) =>
                                  {. "communicationPhoneNumber": 'a0} =
                                  "";
                              };
                              GQL.make_obj(
                                ~communicationPhoneNumber=
                                  switch (
                                    Js.Dict.get(
                                      value,
                                      "communicationPhoneNumber",
                                    )
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
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
                    ~extension=
                      switch (Js.Dict.get(value, "extension")) {
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
                                  (
                                    ~mobileCarrier: 'a0,
                                    ~mobileNetworkCode: 'a1,
                                    ~phoneType: 'a2,
                                    unit
                                  ) =>
                                  {
                                    .
                                    "mobileCarrier": 'a0,
                                    "mobileNetworkCode": 'a1,
                                    "phoneType": 'a2,
                                  } =
                                  "";
                              };
                              GQL.make_obj(
                                ~mobileCarrier=
                                  switch (Js.Dict.get(value, "mobileCarrier")) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
                                        },
                                      )

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~mobileNetworkCode=
                                  switch (
                                    Js.Dict.get(value, "mobileNetworkCode")
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
                                        },
                                      )

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~phoneType=
                                  switch (Js.Dict.get(value, "phoneType")) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
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
                                  (
                                    ~activeId: 'a0,
                                    ~alcoholAwarenessExpirationDate: 'a1,
                                    ~foodHandlersExpirationDate: 'a2,
                                    ~id: 'a3,
                                    ~ineligibleStatus: 'a4,
                                    ~runningBalance: 'a5,
                                    ~details: 'a6,
                                    ~workerAvailableShifts: 'a7,
                                    ~workerUpcomingShifts: 'a8,
                                    ~workerPastShifts: 'a9,
                                    unit
                                  ) =>
                                  {
                                    .
                                    "activeId": 'a0,
                                    "alcoholAwarenessExpirationDate": 'a1,
                                    "foodHandlersExpirationDate": 'a2,
                                    "id": 'a3,
                                    "ineligibleStatus": 'a4,
                                    "runningBalance": 'a5,
                                    "details": 'a6,
                                    "workerAvailableShifts": 'a7,
                                    "workerUpcomingShifts": 'a8,
                                    "workerPastShifts": 'a9,
                                  } =
                                  "";
                              };
                              GQL.make_obj(
                                ~activeId=
                                  switch (Js.Dict.get(value, "activeId")) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeNumber(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected int, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => int_of_float(value)
                                        },
                                      )

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~alcoholAwarenessExpirationDate=
                                  switch (
                                    Js.Dict.get(
                                      value,
                                      "alcoholAwarenessExpirationDate",
                                    )
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None => Some(value)

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~foodHandlersExpirationDate=
                                  switch (
                                    Js.Dict.get(
                                      value,
                                      "foodHandlersExpirationDate",
                                    )
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None => Some(value)

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~id=
                                  switch (Js.Dict.get(value, "id")) {
                                  | Some(value) => value

                                  | None =>
                                    Js.Exn.raiseError(
                                      "graphql_ppx: "
                                      ++ "Field "
                                      ++ "id"
                                      ++ " on type "
                                      ++ "Worker"
                                      ++ " is missing",
                                    )
                                  },
                                ~ineligibleStatus=
                                  switch (
                                    Js.Dict.get(value, "ineligibleStatus")
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeString(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected string, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => (value: string)
                                        },
                                      )

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~runningBalance=
                                  switch (
                                    Js.Dict.get(value, "runningBalance")
                                  ) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
                                        switch (Js.Json.decodeNumber(value)) {
                                        | None =>
                                          Js.Exn.raiseError(
                                            "graphql_ppx: "
                                            ++ "Expected int, got "
                                            ++ Js.Json.stringify(value),
                                          )
                                        | Some(value) => int_of_float(value)
                                        },
                                      )

                                    | Some(_) => None
                                    }

                                  | None => None
                                  },
                                ~details=
                                  switch (Js.Dict.get(value, "details")) {
                                  | Some(value) =>
                                    switch (Js.Json.decodeNull(value)) {
                                    | None =>
                                      Some(
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
                                              (
                                                ~averageRatingFromBusinessOverall: 'a0,
                                                ~fohQwickScore: 'a1,
                                                ~fohQwickScorePercentile: 'a2,
                                                ~fohRating: 'a3,
                                                ~bohQwickScore: 'a4,
                                                ~bohQwickScorePercentile: 'a5,
                                                ~bohRating: 'a6,
                                                ~attendedOrienationAt: 'a7,
                                                ~stripeMerchantAccountId: 'a8,
                                                ~blocked: 'a9,
                                                ~experiences: 'a10,
                                                ~numberOfShiftsOverall: 'a11,
                                                ~shiftNoShows: 'a12,
                                                ~shift4HourCancellations: 'a13,
                                                ~shift24HourCancellations: 'a14,
                                                ~overallCancellations: 'a15,
                                                unit
                                              ) =>
                                              {
                                                .
                                                "averageRatingFromBusinessOverall": 'a0,
                                                "fohQwickScore": 'a1,
                                                "fohQwickScorePercentile": 'a2,
                                                "fohRating": 'a3,
                                                "bohQwickScore": 'a4,
                                                "bohQwickScorePercentile": 'a5,
                                                "bohRating": 'a6,
                                                "attendedOrienationAt": 'a7,
                                                "stripeMerchantAccountId": 'a8,
                                                "blocked": 'a9,
                                                "experiences": 'a10,
                                                "numberOfShiftsOverall": 'a11,
                                                "shiftNoShows": 'a12,
                                                "shift4HourCancellations": 'a13,
                                                "shift24HourCancellations": 'a14,
                                                "overallCancellations": 'a15,
                                              } =
                                              "";
                                          };
                                          GQL.make_obj(
                                            ~averageRatingFromBusinessOverall=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "averageRatingFromBusinessOverall",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~fohQwickScore=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "fohQwickScore",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~fohQwickScorePercentile=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "fohQwickScorePercentile",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~fohRating=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "fohRating",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~bohQwickScore=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "bohQwickScore",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~bohQwickScorePercentile=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "bohQwickScorePercentile",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~bohRating=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "bohRating",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~attendedOrienationAt=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "attendedOrienationAt",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~stripeMerchantAccountId=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "stripeMerchantAccountId",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
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
                                                        ++ Js.Json.stringify(
                                                             value,
                                                           ),
                                                      )
                                                    | Some(value) => (
                                                        value: string
                                                      )
                                                    },
                                                  )

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~blocked=
                                              switch (
                                                Js.Dict.get(value, "blocked")
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
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
                                                        ++ Js.Json.stringify(
                                                             value,
                                                           ),
                                                      )
                                                    | Some(value) => (
                                                        value: string
                                                      )
                                                    },
                                                  )

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~experiences=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "experiences",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
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
                                                        ++ Js.Json.stringify(
                                                             value,
                                                           ),
                                                      )
                                                    | Some(value) => (
                                                        value: string
                                                      )
                                                    },
                                                  )

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~numberOfShiftsOverall=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "numberOfShiftsOverall",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~shiftNoShows=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "shiftNoShows",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~shift4HourCancellations=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "shift4HourCancellations",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~shift24HourCancellations=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "shift24HourCancellations",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

                                                | Some(_) => None
                                                }

                                              | None => None
                                              },
                                            ~overallCancellations=
                                              switch (
                                                Js.Dict.get(
                                                  value,
                                                  "overallCancellations",
                                                )
                                              ) {
                                              | Some(value) =>
                                                switch (
                                                  Js.Json.decodeNull(value)
                                                ) {
                                                | None => Some(value)

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
                                ~workerAvailableShifts=
                                  switch (
                                    Js.Dict.get(
                                      value,
                                      "workerAvailableShifts",
                                    )
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
                                                                    ~workerId: 'a0,
                                                                    ~shiftId: 'a1,
                                                                    ~shift: 'a2,
                                                                    unit
                                                                    ) =>
                                                                    {
                                                                    .
                                                                    "workerId": 'a0,
                                                                    "shiftId": 'a1,
                                                                    "shift": 'a2,
                                                                    } =
                                                                    "";
                                                                };
                                                                GQL.make_obj(
                                                                  ~workerId=
                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "workerId",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) => value

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "workerId"
                                                                    ++ " on type "
                                                                    ++ "WorkerAvailableShift"
                                                                    ++ " is missing",
                                                                    )
                                                                    },
                                                                  ~shiftId=
                                                                    switch (
                                                                    Js.Dict.get(
                                                                    value,
                                                                    "shiftId",
                                                                    )
                                                                    ) {
                                                                    | Some(
                                                                    value,
                                                                    ) => value

                                                                    | None =>
                                                                    Js.Exn.raiseError(
                                                                    "graphql_ppx: "
                                                                    ++ "Field "
                                                                    ++ "shiftId"
                                                                    ++ " on type "
                                                                    ++ "WorkerAvailableShift"
                                                                    ++ " is missing",
                                                                    )
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
                                              ++ "WorkerAvailableShiftsConnection"
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
                                      ++ "workerAvailableShifts"
                                      ++ " on type "
                                      ++ "Worker"
                                      ++ " is missing",
                                    )
                                  },
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
                                ~workerPastShifts=
                                  switch (
                                    Js.Dict.get(value, "workerPastShifts")
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
                                              ++ "WorkerPastShiftsConnection"
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
                                      ++ "workerPastShifts"
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
