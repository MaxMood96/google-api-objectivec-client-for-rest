// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Air Quality API (airquality/v1)
// Description:
//   The Air Quality API.
// Documentation:
//   https://developers.google.com/maps/documentation/air-quality

#import <GoogleAPIClientForREST/GTLRAirQuality.h>

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeAirQualityCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRAirQualityService
//

@implementation GTLRAirQualityService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://airquality.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end