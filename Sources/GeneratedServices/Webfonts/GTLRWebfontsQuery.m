// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Web Fonts Developer API (webfonts/v1)
// Description:
//   The Google Web Fonts Developer API lets you retrieve information about web
//   fonts served by Google.
// Documentation:
//   https://developers.google.com/fonts/docs/developer_api

#import <GoogleAPIClientForREST/GTLRWebfontsQuery.h>

#import <GoogleAPIClientForREST/GTLRWebfontsObjects.h>

// ----------------------------------------------------------------------------
// Constants

// capability
NSString * const kGTLRWebfontsCapabilityCapabilityUnspecified = @"CAPABILITY_UNSPECIFIED";
NSString * const kGTLRWebfontsCapabilityVf                    = @"VF";
NSString * const kGTLRWebfontsCapabilityWoff2                 = @"WOFF2";

// sort
NSString * const kGTLRWebfontsSortAlpha         = @"ALPHA";
NSString * const kGTLRWebfontsSortDate          = @"DATE";
NSString * const kGTLRWebfontsSortPopularity    = @"POPULARITY";
NSString * const kGTLRWebfontsSortSortUndefined = @"SORT_UNDEFINED";
NSString * const kGTLRWebfontsSortStyle         = @"STYLE";
NSString * const kGTLRWebfontsSortTrending      = @"TRENDING";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRWebfontsQuery

@dynamic fields;

@end

@implementation GTLRWebfontsQuery_WebfontsList

@dynamic capability, category, family, sort, subset;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"capability" : [NSString class],
    @"family" : [NSString class]
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/webfonts";
  GTLRWebfontsQuery_WebfontsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRWebfonts_WebfontList class];
  query.loggingName = @"webfonts.webfonts.list";
  return query;
}

@end
