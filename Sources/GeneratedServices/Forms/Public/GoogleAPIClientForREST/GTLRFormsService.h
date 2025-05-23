// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Forms API (forms/v1)
// Description:
//   Reads and writes Google Forms and responses.
// Documentation:
//   https://developers.google.com/workspace/forms/api

#import <GoogleAPIClientForREST/GTLRService.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, create, and delete all your Google Forms
 *  forms
 *
 *  Value "https://www.googleapis.com/auth/forms.body"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFormsBody;
/**
 *  Authorization scope: See all your Google Forms forms
 *
 *  Value "https://www.googleapis.com/auth/forms.body.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFormsBodyReadonly;
/**
 *  Authorization scope: See, edit, create, and delete all of your Google Drive
 *  files
 *
 *  Value "https://www.googleapis.com/auth/drive"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFormsDrive;
/**
 *  Authorization scope: See, edit, create, and delete only the specific Google
 *  Drive files you use with this app
 *
 *  Value "https://www.googleapis.com/auth/drive.file"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFormsDriveFile;
/**
 *  Authorization scope: See and download all your Google Drive files
 *
 *  Value "https://www.googleapis.com/auth/drive.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFormsDriveReadonly;
/**
 *  Authorization scope: See all responses to your Google Forms forms
 *
 *  Value "https://www.googleapis.com/auth/forms.responses.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFormsResponsesReadonly;

// ----------------------------------------------------------------------------
//   GTLRFormsService
//

/**
 *  Service for executing Google Forms API queries.
 *
 *  Reads and writes Google Forms and responses.
 */
@interface GTLRFormsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRFormsQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
