// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   BigQuery Reservation API (bigqueryreservation/v1)
// Description:
//   A service to modify your BigQuery flat-rate reservations.
// Documentation:
//   https://cloud.google.com/bigquery/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRBigQueryReservation_Assignment;
@class GTLRBigQueryReservation_BiReservation;
@class GTLRBigQueryReservation_CapacityCommitment;
@class GTLRBigQueryReservation_MergeCapacityCommitmentsRequest;
@class GTLRBigQueryReservation_MoveAssignmentRequest;
@class GTLRBigQueryReservation_Reservation;
@class GTLRBigQueryReservation_SplitCapacityCommitmentRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other BigQuery Reservation query classes.
 */
@interface GTLRBigQueryReservationQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: bigqueryreservation.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_OperationsDelete : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRBigQueryReservationQuery_OperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: bigqueryreservation.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_OperationsList : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRBigQueryReservation_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRBigQueryReservationQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a new capacity commitment resource.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsCreate : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsCreateWithObject:parent:]

/**
 *  If true, fail the request if another project in the organization has a
 *  capacity commitment.
 */
@property(nonatomic, assign) BOOL enforceSingleAdminProjectPerOrg;

/**
 *  Required. Resource name of the parent reservation. E.g.,
 *  projects/myproject/locations/US
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRBigQueryReservation_CapacityCommitment.
 *
 *  Creates a new capacity commitment resource.
 *
 *  @param object The @c GTLRBigQueryReservation_CapacityCommitment to include
 *    in the query.
 *  @param parent Required. Resource name of the parent reservation. E.g.,
 *    projects/myproject/locations/US
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsCreate
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_CapacityCommitment *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a capacity commitment. Attempting to delete capacity commitment
 *  before its commitment_end_time will fail with the error code
 *  `google.rpc.Code.FAILED_PRECONDITION`.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsDelete : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsDeleteWithname:]

/**
 *  Required. Resource name of the capacity commitment to delete. E.g.,
 *  projects/myproject/locations/US/capacityCommitments/123
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_Empty.
 *
 *  Deletes a capacity commitment. Attempting to delete capacity commitment
 *  before its commitment_end_time will fail with the error code
 *  `google.rpc.Code.FAILED_PRECONDITION`.
 *
 *  @param name Required. Resource name of the capacity commitment to delete.
 *    E.g.,
 *    projects/myproject/locations/US/capacityCommitments/123
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns information about the capacity commitment.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsGet : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsGetWithname:]

/**
 *  Required. Resource name of the capacity commitment to retrieve. E.g.,
 *  projects/myproject/locations/US/capacityCommitments/123
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_CapacityCommitment.
 *
 *  Returns information about the capacity commitment.
 *
 *  @param name Required. Resource name of the capacity commitment to retrieve.
 *    E.g.,
 *    projects/myproject/locations/US/capacityCommitments/123
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists all the capacity commitments for the admin project.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsList : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsListWithparent:]

/** The maximum number of items to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. Resource name of the parent reservation. E.g.,
 *  projects/myproject/locations/US
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRBigQueryReservation_ListCapacityCommitmentsResponse.
 *
 *  Lists all the capacity commitments for the admin project.
 *
 *  @param parent Required. Resource name of the parent reservation. E.g.,
 *    projects/myproject/locations/US
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Merges capacity commitments of the same plan into one. Resulting capacity
 *  commitment has the longer commitment_end_time out of the two. Attempting to
 *  merge capacity commitments of different plan will fail with the error code
 *  `google.rpc.Code.FAILED_PRECONDITION`.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.merge
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsMerge : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsMergeWithObject:parent:]

/**
 *  Parent resource that identifies admin project and location e.g.,
 *  projects/myproject/locations/us
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRBigQueryReservation_CapacityCommitment.
 *
 *  Merges capacity commitments of the same plan into one. Resulting capacity
 *  commitment has the longer commitment_end_time out of the two. Attempting to
 *  merge capacity commitments of different plan will fail with the error code
 *  `google.rpc.Code.FAILED_PRECONDITION`.
 *
 *  @param object The @c GTLRBigQueryReservation_MergeCapacityCommitmentsRequest
 *    to include in the query.
 *  @param parent Parent resource that identifies admin project and location
 *    e.g.,
 *    projects/myproject/locations/us
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsMerge
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_MergeCapacityCommitmentsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Updates an existing capacity commitment.
 *  Only plan and renewal_plan fields can be updated.
 *  Plan can only be changed to a plan of a longer commitment period.
 *  Attempting to change to a plan with shorter commitment period will fail
 *  with the error code `google.rpc.Code.FAILED_PRECONDITION`.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsPatch : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsPatchWithObject:name:]

/**
 *  Output only. The resource name of the capacity commitment, e.g.,
 *  projects/myproject/locations/US/capacityCommitments/123
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Standard field mask for the set of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRBigQueryReservation_CapacityCommitment.
 *
 *  Updates an existing capacity commitment.
 *  Only plan and renewal_plan fields can be updated.
 *  Plan can only be changed to a plan of a longer commitment period.
 *  Attempting to change to a plan with shorter commitment period will fail
 *  with the error code `google.rpc.Code.FAILED_PRECONDITION`.
 *
 *  @param object The @c GTLRBigQueryReservation_CapacityCommitment to include
 *    in the query.
 *  @param name Output only. The resource name of the capacity commitment, e.g.,
 *    projects/myproject/locations/US/capacityCommitments/123
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsPatch
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_CapacityCommitment *)object
                           name:(NSString *)name;

@end

/**
 *  Splits capacity commitment to two commitments of the same plan and
 *  commitment_end_time. A common use case to do that is to perform a downgrade
 *  e.g., in order to downgrade from 10000 slots to 8000, one might split 10000
 *  capacity commitment to 2000 and 8000, change the plan of the first one to
 *  flex and then delete it.
 *
 *  Method: bigqueryreservation.projects.locations.capacityCommitments.split
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsSplit : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsCapacityCommitmentsSplitWithObject:name:]

/**
 *  Required. The resource name e.g.,:
 *  projects/myproject/locations/US/capacityCommitments/123
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_SplitCapacityCommitmentResponse.
 *
 *  Splits capacity commitment to two commitments of the same plan and
 *  commitment_end_time. A common use case to do that is to perform a downgrade
 *  e.g., in order to downgrade from 10000 slots to 8000, one might split 10000
 *  capacity commitment to 2000 and 8000, change the plan of the first one to
 *  flex and then delete it.
 *
 *  @param object The @c GTLRBigQueryReservation_SplitCapacityCommitmentRequest
 *    to include in the query.
 *  @param name Required. The resource name e.g.,:
 *    projects/myproject/locations/US/capacityCommitments/123
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsCapacityCommitmentsSplit
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_SplitCapacityCommitmentRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Retrieves a BI reservation.
 *
 *  Method: bigqueryreservation.projects.locations.getBiReservation
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsGetBiReservation : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsGetBiReservationWithname:]

/**
 *  Required. Name of the requested reservation, for example:
 *  `projects/{project_id}/locations/{location_id}/bireservation`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_BiReservation.
 *
 *  Retrieves a BI reservation.
 *
 *  @param name Required. Name of the requested reservation, for example:
 *    `projects/{project_id}/locations/{location_id}/bireservation`
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsGetBiReservation
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates an object which allows the given project to submit jobs
 *  of a certain type using slots from the specified reservation. Currently a
 *  resource (project, folder, organization) can only have one assignment per
 *  {job_type, location}, and that reservation will be used for all jobs of the
 *  matching type. Within the organization, different assignments can be
 *  created on projects, folders or organization level. During query execution,
 *  the assignment is looked up at the project, folder and organization levels
 *  in that order. The first assignment found is applied to the query. When
 *  creating assignments, it does not matter if other assignments exist at
 *  higher levels. E.g: organizationA contains project1, project2. Assignments
 *  for organizationA, project1 and project2 could all be created, mapping to
 *  the same or different reservations.
 *  Returns `google.rpc.Code.PERMISSION_DENIED` if user does not have
 *  'bigquery.admin' permissions on the project using the reservation
 *  and the project that owns this reservation.
 *  Returns `google.rpc.Code.INVALID_ARGUMENT` when location of the assignment
 *  does not match location of the reservation.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.assignments.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsCreate : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsAssignmentsCreateWithObject:parent:]

/**
 *  Required. The parent resource name of the assignment
 *  E.g.: projects/myproject/locations/US/reservations/team1-prod
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRBigQueryReservation_Assignment.
 *
 *  Creates an object which allows the given project to submit jobs
 *  of a certain type using slots from the specified reservation. Currently a
 *  resource (project, folder, organization) can only have one assignment per
 *  {job_type, location}, and that reservation will be used for all jobs of the
 *  matching type. Within the organization, different assignments can be
 *  created on projects, folders or organization level. During query execution,
 *  the assignment is looked up at the project, folder and organization levels
 *  in that order. The first assignment found is applied to the query. When
 *  creating assignments, it does not matter if other assignments exist at
 *  higher levels. E.g: organizationA contains project1, project2. Assignments
 *  for organizationA, project1 and project2 could all be created, mapping to
 *  the same or different reservations.
 *  Returns `google.rpc.Code.PERMISSION_DENIED` if user does not have
 *  'bigquery.admin' permissions on the project using the reservation
 *  and the project that owns this reservation.
 *  Returns `google.rpc.Code.INVALID_ARGUMENT` when location of the assignment
 *  does not match location of the reservation.
 *
 *  @param object The @c GTLRBigQueryReservation_Assignment to include in the
 *    query.
 *  @param parent Required. The parent resource name of the assignment
 *    E.g.: projects/myproject/locations/US/reservations/team1-prod
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsCreate
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_Assignment *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a assignment. No expansion will happen.
 *  E.g:
 *  organizationA contains project1 and project2. Reservation res1 exists.
 *  CreateAssignment was invoked previously and following assignments were
 *  created explicitly:
 *  <organizationA, res1>
 *  <project1, res1>
 *  Then deletion of <organizationA, res1> won't affect <project1, res1>. After
 *  deletion of <organizationA, res1>, queries from project1 will still use
 *  res1, while queries from project2 will use on-demand mode.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.assignments.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsDelete : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsAssignmentsDeleteWithname:]

/**
 *  Required. Name of the resource, e.g.:
 *  projects/myproject/locations/US/reservations/team1-prod/assignments/123
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_Empty.
 *
 *  Deletes a assignment. No expansion will happen.
 *  E.g:
 *  organizationA contains project1 and project2. Reservation res1 exists.
 *  CreateAssignment was invoked previously and following assignments were
 *  created explicitly:
 *  <organizationA, res1>
 *  <project1, res1>
 *  Then deletion of <organizationA, res1> won't affect <project1, res1>. After
 *  deletion of <organizationA, res1>, queries from project1 will still use
 *  res1, while queries from project2 will use on-demand mode.
 *
 *  @param name Required. Name of the resource, e.g.:
 *    projects/myproject/locations/US/reservations/team1-prod/assignments/123
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists assignments.
 *  Only explicitly created assignments will be returned. E.g:
 *  organizationA contains project1 and project2. Reservation res1 exists.
 *  CreateAssignment was invoked previously and following assignments were
 *  created explicitly:
 *  <organizationA, res1>
 *  <project1, res1>
 *  Then this API will just return the above two assignments for reservation
 *  res1, and no expansion/merge will happen. Wildcard "-" can be used for
 *  reservations in the request. In that case all assignments belongs to the
 *  specified project and location will be listed. Note
 *  "-" cannot be used for projects nor locations.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.assignments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsList : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsAssignmentsListWithparent:]

/** The maximum number of items to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name e.g.:
 *  projects/myproject/locations/US/reservations/team1-prod
 *  Or:
 *  projects/myproject/locations/US/reservations/-
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRBigQueryReservation_ListAssignmentsResponse.
 *
 *  Lists assignments.
 *  Only explicitly created assignments will be returned. E.g:
 *  organizationA contains project1 and project2. Reservation res1 exists.
 *  CreateAssignment was invoked previously and following assignments were
 *  created explicitly:
 *  <organizationA, res1>
 *  <project1, res1>
 *  Then this API will just return the above two assignments for reservation
 *  res1, and no expansion/merge will happen. Wildcard "-" can be used for
 *  reservations in the request. In that case all assignments belongs to the
 *  specified project and location will be listed. Note
 *  "-" cannot be used for projects nor locations.
 *
 *  @param parent Required. The parent resource name e.g.:
 *    projects/myproject/locations/US/reservations/team1-prod
 *    Or:
 *    projects/myproject/locations/US/reservations/-
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Moves a assignment under a new reservation. Customers can do this by
 *  deleting the existing assignment followed by creating another assignment
 *  under the new reservation, but this method provides a transactional way to
 *  do so, to make sure the assignee always has an associated reservation.
 *  Without the method customers might see some queries run on-demand which
 *  might be unexpected.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.assignments.move
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsMove : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsAssignmentsMoveWithObject:name:]

/**
 *  Required. The resource name of the assignment,
 *  e.g.:
 *  projects/myproject/locations/US/reservations/team1-prod/assignments/123
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_Assignment.
 *
 *  Moves a assignment under a new reservation. Customers can do this by
 *  deleting the existing assignment followed by creating another assignment
 *  under the new reservation, but this method provides a transactional way to
 *  do so, to make sure the assignee always has an associated reservation.
 *  Without the method customers might see some queries run on-demand which
 *  might be unexpected.
 *
 *  @param object The @c GTLRBigQueryReservation_MoveAssignmentRequest to
 *    include in the query.
 *  @param name Required. The resource name of the assignment,
 *    e.g.:
 *    projects/myproject/locations/US/reservations/team1-prod/assignments/123
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsAssignmentsMove
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_MoveAssignmentRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a new reservation resource.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsCreate : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsCreateWithObject:parent:]

/**
 *  Required. Project, location. E.g.,
 *  projects/myproject/locations/US
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The reservation ID. This field must only contain lower case alphanumeric
 *  characters or dash. Max length is 64 characters.
 */
@property(nonatomic, copy, nullable) NSString *reservationId;

/**
 *  Fetches a @c GTLRBigQueryReservation_Reservation.
 *
 *  Creates a new reservation resource.
 *
 *  @param object The @c GTLRBigQueryReservation_Reservation to include in the
 *    query.
 *  @param parent Required. Project, location. E.g.,
 *    projects/myproject/locations/US
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsCreate
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_Reservation *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a reservation.
 *  Returns `google.rpc.Code.FAILED_PRECONDITION` when reservation has
 *  assignments.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsDelete : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsDeleteWithname:]

/**
 *  Required. Resource name of the reservation to retrieve. E.g.,
 *  projects/myproject/locations/US/reservations/team1-prod
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_Empty.
 *
 *  Deletes a reservation.
 *  Returns `google.rpc.Code.FAILED_PRECONDITION` when reservation has
 *  assignments.
 *
 *  @param name Required. Resource name of the reservation to retrieve. E.g.,
 *    projects/myproject/locations/US/reservations/team1-prod
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns information about the reservation.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsGet : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsGetWithname:]

/**
 *  Required. Resource name of the reservation to retrieve. E.g.,
 *  projects/myproject/locations/US/reservations/team1-prod
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRBigQueryReservation_Reservation.
 *
 *  Returns information about the reservation.
 *
 *  @param name Required. Resource name of the reservation to retrieve. E.g.,
 *    projects/myproject/locations/US/reservations/team1-prod
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists all the reservations for the project in the specified location.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsList : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsListWithparent:]

/** The maximum number of items to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name containing project and location, e.g.:
 *  "projects/myproject/locations/US"
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRBigQueryReservation_ListReservationsResponse.
 *
 *  Lists all the reservations for the project in the specified location.
 *
 *  @param parent Required. The parent resource name containing project and
 *    location, e.g.:
 *    "projects/myproject/locations/US"
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates an existing reservation resource.
 *
 *  Method: bigqueryreservation.projects.locations.reservations.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsReservationsPatch : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsReservationsPatchWithObject:name:]

/**
 *  The resource name of the reservation, e.g.,
 *  "projects/ * /locations/ * /reservations/team1-prod".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Standard field mask for the set of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRBigQueryReservation_Reservation.
 *
 *  Updates an existing reservation resource.
 *
 *  @param object The @c GTLRBigQueryReservation_Reservation to include in the
 *    query.
 *  @param name The resource name of the reservation, e.g.,
 *    "projects/ * /locations/ * /reservations/team1-prod".
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsReservationsPatch
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_Reservation *)object
                           name:(NSString *)name;

@end

/**
 *  Looks up assignments for a specified resource for a particular region.
 *  If the request is about a project:
 *  1) Assignments created on the project will be returned if they exist.
 *  2) Otherwise assignments created on the closest ancestor will be
 *  returned. 3) Assignments for different JobTypes will all be returned.
 *  Same logic applies if the request is about a folder.
 *  If the request is about an organization, then assignments created on the
 *  organization will be returned (organization doesn't have ancestors).
 *  Comparing to ListAssignments, there are some behavior
 *  differences:
 *  1) permission on the assignee will be verified in this API.
 *  2) Hierarchy lookup (project->folder->organization) happens in this API.
 *  3) Parent here is projects/ * /locations/ *, instead of
 *  projects/ * /locations/ *reservations/ *.
 *  Note "-" cannot be used for projects
 *  nor locations.
 *
 *  Method: bigqueryreservation.projects.locations.searchAssignments
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsSearchAssignments : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsSearchAssignmentsWithparent:]

/** The maximum number of items to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of the admin project(containing project and
 *  location),
 *  e.g.:
 *  "projects/myproject/locations/US".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Please specify resource name as assignee in the query.
 *  e.g., "assignee=projects/myproject"
 *  "assignee=folders/123"
 *  "assignee=organizations/456"
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Fetches a @c GTLRBigQueryReservation_SearchAssignmentsResponse.
 *
 *  Looks up assignments for a specified resource for a particular region.
 *  If the request is about a project:
 *  1) Assignments created on the project will be returned if they exist.
 *  2) Otherwise assignments created on the closest ancestor will be
 *  returned. 3) Assignments for different JobTypes will all be returned.
 *  Same logic applies if the request is about a folder.
 *  If the request is about an organization, then assignments created on the
 *  organization will be returned (organization doesn't have ancestors).
 *  Comparing to ListAssignments, there are some behavior
 *  differences:
 *  1) permission on the assignee will be verified in this API.
 *  2) Hierarchy lookup (project->folder->organization) happens in this API.
 *  3) Parent here is projects/ * /locations/ *, instead of
 *  projects/ * /locations/ *reservations/ *.
 *  Note "-" cannot be used for projects
 *  nor locations.
 *
 *  @param parent Required. The resource name of the admin project(containing
 *    project and location),
 *    e.g.:
 *    "projects/myproject/locations/US".
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsSearchAssignments
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a BI reservation.
 *  Only fields specified in the field_mask are updated.
 *  Singleton BI reservation always exists with default size 0.
 *  In order to reserve BI capacity it needs to be updated to an amount
 *  greater than 0. In order to release BI capacity reservation size
 *  must be set to 0.
 *
 *  Method: bigqueryreservation.projects.locations.updateBiReservation
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeBigQueryReservationBigquery
 *    @c kGTLRAuthScopeBigQueryReservationCloudPlatform
 */
@interface GTLRBigQueryReservationQuery_ProjectsLocationsUpdateBiReservation : GTLRBigQueryReservationQuery
// Previous library name was
//   +[GTLQueryBigQueryReservation queryForProjectsLocationsUpdateBiReservationWithObject:name:]

/**
 *  The resource name of the singleton BI reservation.
 *  Reservation names have the form
 *  `projects/{project_id}/locations/{location_id}/bireservation`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A list of fields to be updated in this request.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRBigQueryReservation_BiReservation.
 *
 *  Updates a BI reservation.
 *  Only fields specified in the field_mask are updated.
 *  Singleton BI reservation always exists with default size 0.
 *  In order to reserve BI capacity it needs to be updated to an amount
 *  greater than 0. In order to release BI capacity reservation size
 *  must be set to 0.
 *
 *  @param object The @c GTLRBigQueryReservation_BiReservation to include in the
 *    query.
 *  @param name The resource name of the singleton BI reservation.
 *    Reservation names have the form
 *    `projects/{project_id}/locations/{location_id}/bireservation`.
 *
 *  @return GTLRBigQueryReservationQuery_ProjectsLocationsUpdateBiReservation
 */
+ (instancetype)queryWithObject:(GTLRBigQueryReservation_BiReservation *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop