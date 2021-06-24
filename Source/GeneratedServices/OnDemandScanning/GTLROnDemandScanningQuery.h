// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   On-Demand Scanning API (ondemandscanning/v1)
// Description:
//   A service to scan container images for vulnerabilities.
// Documentation:
//   https://cloud.google.com/container-analysis/docs/on-demand-scanning/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLROnDemandScanning_AnalyzePackagesRequestV1;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other On-Demand Scanning query classes.
 */
@interface GTLROnDemandScanningQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Method: ondemandscanning.projects.locations.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsOperationsCancel : GTLROnDemandScanningQuery

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROnDemandScanning_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsOperationsCancel
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: ondemandscanning.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsOperationsDelete : GTLROnDemandScanningQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROnDemandScanning_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: ondemandscanning.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsOperationsGet : GTLROnDemandScanningQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROnDemandScanning_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: ondemandscanning.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsOperationsList : GTLROnDemandScanningQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLROnDemandScanning_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Waits until the specified long-running operation is done or reaches at most
 *  a specified timeout, returning the latest state. If the operation is already
 *  done, the latest state is immediately returned. If the timeout specified is
 *  greater than the default HTTP/RPC timeout, the HTTP/RPC timeout is used. If
 *  the server does not support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Note that this method is on a best-effort
 *  basis. It may return the latest state before the specified timeout
 *  (including immediately), meaning even an immediate response is no guarantee
 *  that the operation is done.
 *
 *  Method: ondemandscanning.projects.locations.operations.wait
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsOperationsWait : GTLROnDemandScanningQuery

/** The name of the operation resource to wait on. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The maximum duration to wait before timing out. If left blank, the wait will
 *  be at most the time permitted by the underlying HTTP/RPC protocol. If RPC
 *  context deadline is also specified, the shorter one will be used.
 */
@property(nonatomic, strong, nullable) GTLRDuration *timeout;

/**
 *  Fetches a @c GTLROnDemandScanning_Operation.
 *
 *  Waits until the specified long-running operation is done or reaches at most
 *  a specified timeout, returning the latest state. If the operation is already
 *  done, the latest state is immediately returned. If the timeout specified is
 *  greater than the default HTTP/RPC timeout, the HTTP/RPC timeout is used. If
 *  the server does not support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Note that this method is on a best-effort
 *  basis. It may return the latest state before the specified timeout
 *  (including immediately), meaning even an immediate response is no guarantee
 *  that the operation is done.
 *
 *  @param name The name of the operation resource to wait on.
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsOperationsWait
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Initiates an analysis of the provided packages.
 *
 *  Method: ondemandscanning.projects.locations.scans.analyzePackages
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsScansAnalyzePackages : GTLROnDemandScanningQuery

/**
 *  Required. The parent of the resource for which analysis is requested.
 *  Format: projects/[project_name]/locations/[location]
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROnDemandScanning_Operation.
 *
 *  Initiates an analysis of the provided packages.
 *
 *  @param object The @c GTLROnDemandScanning_AnalyzePackagesRequestV1 to
 *    include in the query.
 *  @param parent Required. The parent of the resource for which analysis is
 *    requested. Format: projects/[project_name]/locations/[location]
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsScansAnalyzePackages
 */
+ (instancetype)queryWithObject:(GTLROnDemandScanning_AnalyzePackagesRequestV1 *)object
                         parent:(NSString *)parent;

@end

/**
 *  Lists vulnerabilities resulting from a successfully completed scan.
 *
 *  Method: ondemandscanning.projects.locations.scans.vulnerabilities.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOnDemandScanningCloudPlatform
 */
@interface GTLROnDemandScanningQuery_ProjectsLocationsScansVulnerabilitiesList : GTLROnDemandScanningQuery

/** The number of vulnerabilities to retrieve. */
@property(nonatomic, assign) NSInteger pageSize;

/** The page token, resulting from a previous call to ListVulnerabilities. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent of the collection of Vulnerabilities being requested.
 *  Format: projects/[project_name]/locations/[location]/scans/[scan_id]
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROnDemandScanning_ListVulnerabilitiesResponseV1.
 *
 *  Lists vulnerabilities resulting from a successfully completed scan.
 *
 *  @param parent Required. The parent of the collection of Vulnerabilities
 *    being requested. Format:
 *    projects/[project_name]/locations/[location]/scans/[scan_id]
 *
 *  @return GTLROnDemandScanningQuery_ProjectsLocationsScansVulnerabilitiesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop