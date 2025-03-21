// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Workflows API (workflows/v1)
// Description:
//   Manage workflow definitions. To execute workflows and manage executions,
//   see the Workflows Executions API.
// Documentation:
//   https://cloud.google.com/workflows

#import <GoogleAPIClientForREST/GTLRWorkflowsObjects.h>

// ----------------------------------------------------------------------------
// Constants

// GTLRWorkflows_StateError.type
NSString * const kGTLRWorkflows_StateError_Type_KmsError       = @"KMS_ERROR";
NSString * const kGTLRWorkflows_StateError_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";

// GTLRWorkflows_Workflow.callLogLevel
NSString * const kGTLRWorkflows_Workflow_CallLogLevel_CallLogLevelUnspecified = @"CALL_LOG_LEVEL_UNSPECIFIED";
NSString * const kGTLRWorkflows_Workflow_CallLogLevel_LogAllCalls = @"LOG_ALL_CALLS";
NSString * const kGTLRWorkflows_Workflow_CallLogLevel_LogErrorsOnly = @"LOG_ERRORS_ONLY";
NSString * const kGTLRWorkflows_Workflow_CallLogLevel_LogNone  = @"LOG_NONE";

// GTLRWorkflows_Workflow.executionHistoryLevel
NSString * const kGTLRWorkflows_Workflow_ExecutionHistoryLevel_ExecutionHistoryBasic = @"EXECUTION_HISTORY_BASIC";
NSString * const kGTLRWorkflows_Workflow_ExecutionHistoryLevel_ExecutionHistoryDetailed = @"EXECUTION_HISTORY_DETAILED";
NSString * const kGTLRWorkflows_Workflow_ExecutionHistoryLevel_ExecutionHistoryLevelUnspecified = @"EXECUTION_HISTORY_LEVEL_UNSPECIFIED";

// GTLRWorkflows_Workflow.state
NSString * const kGTLRWorkflows_Workflow_State_Active          = @"ACTIVE";
NSString * const kGTLRWorkflows_Workflow_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRWorkflows_Workflow_State_Unavailable     = @"UNAVAILABLE";

// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Empty
//

@implementation GTLRWorkflows_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_ListLocationsResponse
//

@implementation GTLRWorkflows_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRWorkflows_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_ListOperationsResponse
//

@implementation GTLRWorkflows_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRWorkflows_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_ListWorkflowRevisionsResponse
//

@implementation GTLRWorkflows_ListWorkflowRevisionsResponse
@dynamic nextPageToken, workflows;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"workflows" : [GTLRWorkflows_Workflow class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"workflows";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_ListWorkflowsResponse
//

@implementation GTLRWorkflows_ListWorkflowsResponse
@dynamic nextPageToken, unreachable, workflows;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"unreachable" : [NSString class],
    @"workflows" : [GTLRWorkflows_Workflow class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"workflows";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Location
//

@implementation GTLRWorkflows_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Location_Labels
//

@implementation GTLRWorkflows_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Location_Metadata
//

@implementation GTLRWorkflows_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Operation
//

@implementation GTLRWorkflows_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Operation_Metadata
//

@implementation GTLRWorkflows_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Operation_Response
//

@implementation GTLRWorkflows_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_OperationMetadata
//

@implementation GTLRWorkflows_OperationMetadata
@dynamic apiVersion, createTime, endTime, target, verb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_StateError
//

@implementation GTLRWorkflows_StateError
@dynamic details, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Status
//

@implementation GTLRWorkflows_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRWorkflows_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Status_Details_Item
//

@implementation GTLRWorkflows_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Workflow
//

@implementation GTLRWorkflows_Workflow
@dynamic allKmsKeys, allKmsKeysVersions, callLogLevel, createTime,
         cryptoKeyName, cryptoKeyVersion, descriptionProperty,
         executionHistoryLevel, labels, name, revisionCreateTime, revisionId,
         serviceAccount, sourceContents, state, stateError, tags, updateTime,
         userEnvVars;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allKmsKeys" : [NSString class],
    @"allKmsKeysVersions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Workflow_Labels
//

@implementation GTLRWorkflows_Workflow_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Workflow_Tags
//

@implementation GTLRWorkflows_Workflow_Tags

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWorkflows_Workflow_UserEnvVars
//

@implementation GTLRWorkflows_Workflow_UserEnvVars

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end
