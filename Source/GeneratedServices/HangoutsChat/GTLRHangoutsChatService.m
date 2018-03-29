// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Hangouts Chat API (chat/v1)
// Description:
//   Create bots and extend the new Hangouts Chat.
// Documentation:
//   https://developers.google.com/hangouts/chat

#import "GTLRHangoutsChat.h"

@implementation GTLRHangoutsChatService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://chat.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end