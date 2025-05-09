// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Workflows API (workflows/v1)
// Description:
//   Manage workflow definitions. To execute workflows and manage executions,
//   see the Workflows Executions API.
// Documentation:
//   https://cloud.google.com/workflows

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRWorkflowsObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Workflows query classes.
 */
@interface GTLRWorkflowsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: workflows.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsGet : GTLRWorkflowsQuery

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWorkflows_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: workflows.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsList : GTLRWorkflowsQuery

/**
 *  Optional. A list of extra location types that should be used as conditions
 *  for controlling the visibility of the locations.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *extraLocationTypes;

/**
 *  A filter to narrow down results to a preferred subset. The filtering
 *  language accepts strings like `"displayName=tokyo"`, and is documented in
 *  more detail in [AIP-160](https://google.aip.dev/160).
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The maximum number of results to return. If not set, the service selects a
 *  default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from the `next_page_token` field in the response. Send
 *  that page token to receive the subsequent page.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRWorkflows_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: workflows.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsOperationsDelete : GTLRWorkflowsQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWorkflows_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: workflows.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsOperationsGet : GTLRWorkflowsQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWorkflows_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *
 *  Method: workflows.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsOperationsList : GTLRWorkflowsQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRWorkflows_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a new workflow. If a workflow with the specified name already exists
 *  in the specified project and location, the long running operation returns a
 *  ALREADY_EXISTS error.
 *
 *  Method: workflows.projects.locations.workflows.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsWorkflowsCreate : GTLRWorkflowsQuery

/**
 *  Required. Project and location in which the workflow should be created.
 *  Format: projects/{project}/locations/{location}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Required. The ID of the workflow to be created. It has to fulfill the
 *  following requirements: * Must contain only letters, numbers, underscores
 *  and hyphens. * Must start with a letter. * Must be between 1-64 characters.
 *  * Must end with a number or a letter. * Must be unique within the customer
 *  project and location.
 */
@property(nonatomic, copy, nullable) NSString *workflowId;

/**
 *  Fetches a @c GTLRWorkflows_Operation.
 *
 *  Creates a new workflow. If a workflow with the specified name already exists
 *  in the specified project and location, the long running operation returns a
 *  ALREADY_EXISTS error.
 *
 *  @param object The @c GTLRWorkflows_Workflow to include in the query.
 *  @param parent Required. Project and location in which the workflow should be
 *    created. Format: projects/{project}/locations/{location}
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsWorkflowsCreate
 */
+ (instancetype)queryWithObject:(GTLRWorkflows_Workflow *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a workflow with the specified name. This method also cancels and
 *  deletes all running executions of the workflow.
 *
 *  Method: workflows.projects.locations.workflows.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsWorkflowsDelete : GTLRWorkflowsQuery

/**
 *  Required. Name of the workflow to be deleted. Format:
 *  projects/{project}/locations/{location}/workflows/{workflow}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWorkflows_Operation.
 *
 *  Deletes a workflow with the specified name. This method also cancels and
 *  deletes all running executions of the workflow.
 *
 *  @param name Required. Name of the workflow to be deleted. Format:
 *    projects/{project}/locations/{location}/workflows/{workflow}
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsWorkflowsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets details of a single workflow.
 *
 *  Method: workflows.projects.locations.workflows.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsWorkflowsGet : GTLRWorkflowsQuery

/**
 *  Required. Name of the workflow for which information should be retrieved.
 *  Format: projects/{project}/locations/{location}/workflows/{workflow}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. The revision of the workflow to retrieve. If the revision_id is
 *  empty, the latest revision is retrieved. The format is "000001-a4d", where
 *  the first six characters define the zero-padded decimal revision number.
 *  They are followed by a hyphen and three hexadecimal characters.
 */
@property(nonatomic, copy, nullable) NSString *revisionId;

/**
 *  Fetches a @c GTLRWorkflows_Workflow.
 *
 *  Gets details of a single workflow.
 *
 *  @param name Required. Name of the workflow for which information should be
 *    retrieved. Format:
 *    projects/{project}/locations/{location}/workflows/{workflow}
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsWorkflowsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists workflows in a given project and location. The default order is not
 *  specified.
 *
 *  Method: workflows.projects.locations.workflows.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsWorkflowsList : GTLRWorkflowsQuery

/**
 *  Filter to restrict results to specific workflows. For details, see AIP-160.
 *  For example, if you are using the Google APIs Explorer: `state="SUCCEEDED"`
 *  or `createTime>"2023-08-01" AND state="FAILED"`
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Comma-separated list of fields that specify the order of the results.
 *  Default sorting order for a field is ascending. To specify descending order
 *  for a field, append a "desc" suffix. If not specified, the results are
 *  returned in an unspecified order.
 */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  Maximum number of workflows to return per call. The service might return
 *  fewer than this value even if not at the end of the collection. If a value
 *  is not specified, a default value of 500 is used. The maximum permitted
 *  value is 1000 and values greater than 1000 are coerced down to 1000.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token, received from a previous `ListWorkflows` call. Provide this to
 *  retrieve the subsequent page. When paginating, all other parameters provided
 *  to `ListWorkflows` must match the call that provided the page token.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. Project and location from which the workflows should be listed.
 *  Format: projects/{project}/locations/{location}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWorkflows_ListWorkflowsResponse.
 *
 *  Lists workflows in a given project and location. The default order is not
 *  specified.
 *
 *  @param parent Required. Project and location from which the workflows should
 *    be listed. Format: projects/{project}/locations/{location}
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsWorkflowsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists revisions for a given workflow.
 *
 *  Method: workflows.projects.locations.workflows.listRevisions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsWorkflowsListRevisions : GTLRWorkflowsQuery

/**
 *  Required. Workflow for which the revisions should be listed. Format:
 *  projects/{project}/locations/{location}/workflows/{workflow}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The maximum number of revisions to return per page. If a value is not
 *  specified, a default value of 20 is used. The maximum permitted value is
 *  100. Values greater than 100 are coerced down to 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The page token, received from a previous ListWorkflowRevisions call. Provide
 *  this to retrieve the subsequent page.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRWorkflows_ListWorkflowRevisionsResponse.
 *
 *  Lists revisions for a given workflow.
 *
 *  @param name Required. Workflow for which the revisions should be listed.
 *    Format: projects/{project}/locations/{location}/workflows/{workflow}
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsWorkflowsListRevisions
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates an existing workflow. Running this method has no impact on already
 *  running executions of the workflow. A new revision of the workflow might be
 *  created as a result of a successful update operation. In that case, the new
 *  revision is used in new workflow executions.
 *
 *  Method: workflows.projects.locations.workflows.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWorkflowsCloudPlatform
 */
@interface GTLRWorkflowsQuery_ProjectsLocationsWorkflowsPatch : GTLRWorkflowsQuery

/**
 *  The resource name of the workflow. Format:
 *  projects/{project}/locations/{location}/workflows/{workflow}. This is a
 *  workflow-wide field and is not tied to a specific revision.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  List of fields to be updated. If not present, the entire workflow will be
 *  updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRWorkflows_Operation.
 *
 *  Updates an existing workflow. Running this method has no impact on already
 *  running executions of the workflow. A new revision of the workflow might be
 *  created as a result of a successful update operation. In that case, the new
 *  revision is used in new workflow executions.
 *
 *  @param object The @c GTLRWorkflows_Workflow to include in the query.
 *  @param name The resource name of the workflow. Format:
 *    projects/{project}/locations/{location}/workflows/{workflow}. This is a
 *    workflow-wide field and is not tied to a specific revision.
 *
 *  @return GTLRWorkflowsQuery_ProjectsLocationsWorkflowsPatch
 */
+ (instancetype)queryWithObject:(GTLRWorkflows_Workflow *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
