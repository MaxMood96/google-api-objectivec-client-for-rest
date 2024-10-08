// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   reCAPTCHA Enterprise API (recaptchaenterprise/v1)
// Description:
//   Help protect your website from fraudulent activity, spam, and abuse without
//   creating friction.
// Documentation:
//   https://cloud.google.com/recaptcha-enterprise/

#import <GoogleAPIClientForREST/GTLRRecaptchaEnterpriseQuery.h>

@implementation GTLRRecaptchaEnterpriseQuery

@dynamic fields;

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsAssessmentsAnnotate

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1AnnotateAssessmentRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:annotate";
  GTLRRecaptchaEnterpriseQuery_ProjectsAssessmentsAnnotate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1AnnotateAssessmentResponse class];
  query.loggingName = @"recaptchaenterprise.projects.assessments.annotate";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsAssessmentsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Assessment *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/assessments";
  GTLRRecaptchaEnterpriseQuery_ProjectsAssessmentsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Assessment class];
  query.loggingName = @"recaptchaenterprise.projects.assessments.create";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1FirewallPolicy *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/firewallpolicies";
  GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1FirewallPolicy class];
  query.loggingName = @"recaptchaenterprise.projects.firewallpolicies.create";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleProtobufEmpty class];
  query.loggingName = @"recaptchaenterprise.projects.firewallpolicies.delete";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1FirewallPolicy class];
  query.loggingName = @"recaptchaenterprise.projects.firewallpolicies.get";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/firewallpolicies";
  GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ListFirewallPoliciesResponse class];
  query.loggingName = @"recaptchaenterprise.projects.firewallpolicies.list";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1FirewallPolicy *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1FirewallPolicy class];
  query.loggingName = @"recaptchaenterprise.projects.firewallpolicies.patch";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesReorder

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ReorderFirewallPoliciesRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/firewallpolicies:reorder";
  GTLRRecaptchaEnterpriseQuery_ProjectsFirewallpoliciesReorder *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ReorderFirewallPoliciesResponse class];
  query.loggingName = @"recaptchaenterprise.projects.firewallpolicies.reorder";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysAddIpOverride

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1AddIpOverrideRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:addIpOverride";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysAddIpOverride *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1AddIpOverrideResponse class];
  query.loggingName = @"recaptchaenterprise.projects.keys.addIpOverride";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Key *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/keys";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Key class];
  query.loggingName = @"recaptchaenterprise.projects.keys.create";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleProtobufEmpty class];
  query.loggingName = @"recaptchaenterprise.projects.keys.delete";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Key class];
  query.loggingName = @"recaptchaenterprise.projects.keys.get";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysGetMetrics

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysGetMetrics *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Metrics class];
  query.loggingName = @"recaptchaenterprise.projects.keys.getMetrics";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/keys";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ListKeysResponse class];
  query.loggingName = @"recaptchaenterprise.projects.keys.list";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysListIpOverrides

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:listIpOverrides";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysListIpOverrides *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ListIpOverridesResponse class];
  query.loggingName = @"recaptchaenterprise.projects.keys.listIpOverrides";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysMigrate

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1MigrateKeyRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:migrate";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysMigrate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Key class];
  query.loggingName = @"recaptchaenterprise.projects.keys.migrate";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Key *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1Key class];
  query.loggingName = @"recaptchaenterprise.projects.keys.patch";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysRemoveIpOverride

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1RemoveIpOverrideRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:removeIpOverride";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysRemoveIpOverride *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1RemoveIpOverrideResponse class];
  query.loggingName = @"recaptchaenterprise.projects.keys.removeIpOverride";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsKeysRetrieveLegacySecretKey

@dynamic key;

+ (instancetype)queryWithKey:(NSString *)key {
  NSArray *pathParams = @[ @"key" ];
  NSString *pathURITemplate = @"v1/{+key}:retrieveLegacySecretKey";
  GTLRRecaptchaEnterpriseQuery_ProjectsKeysRetrieveLegacySecretKey *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.key = key;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1RetrieveLegacySecretKeyResponse class];
  query.loggingName = @"recaptchaenterprise.projects.keys.retrieveLegacySecretKey";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsRelatedaccountgroupmembershipsSearch

@dynamic project;

+ (instancetype)queryWithObject:(GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1SearchRelatedAccountGroupMembershipsRequest *)object
                        project:(NSString *)project {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"project" ];
  NSString *pathURITemplate = @"v1/{+project}/relatedaccountgroupmemberships:search";
  GTLRRecaptchaEnterpriseQuery_ProjectsRelatedaccountgroupmembershipsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.project = project;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1SearchRelatedAccountGroupMembershipsResponse class];
  query.loggingName = @"recaptchaenterprise.projects.relatedaccountgroupmemberships.search";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsRelatedaccountgroupsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/relatedaccountgroups";
  GTLRRecaptchaEnterpriseQuery_ProjectsRelatedaccountgroupsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ListRelatedAccountGroupsResponse class];
  query.loggingName = @"recaptchaenterprise.projects.relatedaccountgroups.list";
  return query;
}

@end

@implementation GTLRRecaptchaEnterpriseQuery_ProjectsRelatedaccountgroupsMembershipsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships";
  GTLRRecaptchaEnterpriseQuery_ProjectsRelatedaccountgroupsMembershipsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRecaptchaEnterprise_GoogleCloudRecaptchaenterpriseV1ListRelatedAccountGroupMembershipsResponse class];
  query.loggingName = @"recaptchaenterprise.projects.relatedaccountgroups.memberships.list";
  return query;
}

@end
