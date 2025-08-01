// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Civic Information API (civicinfo/v2)
// Description:
//   Provides polling places, early vote locations, contest data, election
//   officials, and government representatives for U.S. residential addresses.
// Documentation:
//   https://developers.google.com/civic-information/

#import <GoogleAPIClientForREST/GTLRObject.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCivicInfo_ApiprotosV2DivisionByAddressResponse_Divisions;
@class GTLRCivicInfo_ApiprotosV2DivisionSearchResult;
@class GTLRCivicInfo_SchemaV2AdministrationRegion;
@class GTLRCivicInfo_SchemaV2AdministrativeBody;
@class GTLRCivicInfo_SchemaV2Candidate;
@class GTLRCivicInfo_SchemaV2Channel;
@class GTLRCivicInfo_SchemaV2Contest;
@class GTLRCivicInfo_SchemaV2Election;
@class GTLRCivicInfo_SchemaV2ElectionOfficial;
@class GTLRCivicInfo_SchemaV2ElectoralDistrict;
@class GTLRCivicInfo_SchemaV2GeographicDivision;
@class GTLRCivicInfo_SchemaV2PollingLocation;
@class GTLRCivicInfo_SchemaV2Precinct;
@class GTLRCivicInfo_SchemaV2SimpleAddressType;
@class GTLRCivicInfo_SchemaV2Source;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCivicInfo_SchemaV2Contest.level

/** Value: "administrativeArea1" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_AdministrativeArea1;
/** Value: "administrativeArea2" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_AdministrativeArea2;
/** Value: "country" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_Country;
/** Value: "international" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_International;
/** Value: "locality" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_Locality;
/** Value: "regional" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_Regional;
/** Value: "special" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_Special;
/** Value: "subLocality1" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_SubLocality1;
/** Value: "subLocality2" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Level_SubLocality2;

// ----------------------------------------------------------------------------
// GTLRCivicInfo_SchemaV2Contest.roles

/** Value: "deputyHeadOfGovernment" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_DeputyHeadOfGovernment;
/** Value: "executiveCouncil" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_ExecutiveCouncil;
/** Value: "governmentOfficer" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_GovernmentOfficer;
/** Value: "headOfGovernment" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_HeadOfGovernment;
/** Value: "headOfState" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_HeadOfState;
/** Value: "highestCourtJudge" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_HighestCourtJudge;
/** Value: "judge" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_Judge;
/** Value: "legislatorLowerBody" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_LegislatorLowerBody;
/** Value: "legislatorUpperBody" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_LegislatorUpperBody;
/** Value: "otherRole" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_OtherRole;
/** Value: "schoolBoard" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_SchoolBoard;
/** Value: "specialPurposeOfficer" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Contest_Roles_SpecialPurposeOfficer;

// ----------------------------------------------------------------------------
// GTLRCivicInfo_SchemaV2Election.shapeLookupBehavior

/** Value: "shapeLookupDefault" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Election_ShapeLookupBehavior_ShapeLookupDefault;
/** Value: "shapeLookupDisabled" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Election_ShapeLookupBehavior_ShapeLookupDisabled;
/** Value: "shapeLookupEnabled" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2Election_ShapeLookupBehavior_ShapeLookupEnabled;

// ----------------------------------------------------------------------------
// GTLRCivicInfo_SchemaV2ElectoralDistrict.scope

/** Value: "cityCouncil" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_CityCouncil;
/** Value: "citywide" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Citywide;
/** Value: "congressional" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Congressional;
/** Value: "countyCouncil" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_CountyCouncil;
/** Value: "countywide" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Countywide;
/** Value: "judicial" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Judicial;
/** Value: "national" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_National;
/** Value: "schoolBoard" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_SchoolBoard;
/** Value: "special" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Special;
/** Value: "stateLower" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_StateLower;
/** Value: "stateUpper" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_StateUpper;
/** Value: "statewide" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Statewide;
/** Value: "township" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Township;
/** Value: "ward" */
FOUNDATION_EXTERN NSString * const kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Ward;

/**
 *  GTLRCivicInfo_ApiprotosV2DivisionByAddressResponse
 */
@interface GTLRCivicInfo_ApiprotosV2DivisionByAddressResponse : GTLRObject

@property(nonatomic, strong, nullable) GTLRCivicInfo_ApiprotosV2DivisionByAddressResponse_Divisions *divisions;

/** The normalized version of the requested address. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2SimpleAddressType *normalizedInput;

@end


/**
 *  GTLRCivicInfo_ApiprotosV2DivisionByAddressResponse_Divisions
 *
 *  @note This class is documented as having more properties of
 *        GTLRCivicInfo_SchemaV2GeographicDivision. Use @c -additionalJSONKeys
 *        and @c -additionalPropertyForName: to get the list of properties and
 *        then fetch them; or @c -additionalProperties to fetch them all at
 *        once.
 */
@interface GTLRCivicInfo_ApiprotosV2DivisionByAddressResponse_Divisions : GTLRObject
@end


/**
 *  Represents a political geographic division that matches the requested query.
 */
@interface GTLRCivicInfo_ApiprotosV2DivisionSearchResult : GTLRObject

/**
 *  Other Open Civic Data identifiers that refer to the same division -- for
 *  example, those that refer to other political divisions whose boundaries are
 *  defined to be coterminous with this one. For example,
 *  ocd-division/country:us/state:wy will include an alias of
 *  ocd-division/country:us/state:wy/cd:1, since Wyoming has only one
 *  Congressional district.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *aliases;

/** The name of the division. */
@property(nonatomic, copy, nullable) NSString *name;

/** The unique Open Civic Data identifier for this division */
@property(nonatomic, copy, nullable) NSString *ocdId;

@end


/**
 *  The result of a division search query.
 */
@interface GTLRCivicInfo_CivicinfoApiprotosV2DivisionSearchResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#divisionSearchResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_ApiprotosV2DivisionSearchResult *> *results;

@end


/**
 *  The list of elections available for this version of the API.
 */
@interface GTLRCivicInfo_CivicinfoApiprotosV2ElectionsQueryResponse : GTLRObject

/** A list of available elections */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Election *> *elections;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#electionsQueryResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  The result of a voter info lookup query.
 */
@interface GTLRCivicInfo_CivicinfoApiprotosV2VoterInfoResponse : GTLRObject

/** Contests that will appear on the voter's ballot. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Contest *> *contests;

/**
 *  Locations where a voter is eligible to drop off a completed ballot. The
 *  voter must have received and completed a ballot prior to arriving at the
 *  location. The location may not have ballots available on the premises. These
 *  locations could be open on or before election day as indicated in the
 *  pollingHours field.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2PollingLocation *> *dropOffLocations;

/**
 *  Locations where the voter is eligible to vote early, prior to election day.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2PollingLocation *> *earlyVoteSites;

/** The election that was queried. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2Election *election;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#voterInfoResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Specifies whether voters in the precinct vote only by mailing their ballots
 *  (with the possible option of dropping off their ballots as well).
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *mailOnly;

/** The normalized version of the requested address */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2SimpleAddressType *normalizedInput;

/**
 *  When there are multiple elections for a voter address, the otherElections
 *  field is populated in the API response and there are two possibilities: 1.
 *  If the earliest election is not the intended election, specify the election
 *  ID of the desired election in a second API request using the electionId
 *  field. 2. If these elections occur on the same day, the API doesn?t return
 *  any polling location, contest, or election official information to ensure
 *  that an additional query is made. For user-facing applications, we recommend
 *  displaying these elections to the user to disambiguate. A second API request
 *  using the electionId field should be made for the election that is relevant
 *  to the user.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Election *> *otherElections;

/** Locations where the voter is eligible to vote on election day. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2PollingLocation *> *pollingLocations;

@property(nonatomic, copy, nullable) NSString *precinctId;

/**
 *  The precincts that match this voter's address. Will only be returned for
 *  project IDs which have been allowlisted as "partner projects".
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Precinct *> *precincts;

/**
 *  Local Election Information for the state that the voter votes in. For the
 *  US, there will only be one element in this array.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2AdministrationRegion *> *state;

@end


/**
 *  Describes information about a regional election administrative area.
 */
@interface GTLRCivicInfo_SchemaV2AdministrationRegion : GTLRObject

/** The election administration body for this area. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2AdministrativeBody *electionAdministrationBody;

/**
 *  The city or county that provides election information for this voter. This
 *  object can have the same elements as state.
 */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2AdministrationRegion *localJurisdiction;

/** The name of the jurisdiction. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A list of sources for this area. If multiple sources are listed the data has
 *  been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Source *> *sources;

@end


/**
 *  Information about an election administrative body (e.g. County Board of
 *  Elections).
 */
@interface GTLRCivicInfo_SchemaV2AdministrativeBody : GTLRObject

/**
 *  A URL provided by this administrative body for information on absentee
 *  voting.
 */
@property(nonatomic, copy, nullable) NSString *absenteeVotingInfoUrl;

/**
 *  A URL provided by this administrative body to give contest information to
 *  the voter.
 */
@property(nonatomic, copy, nullable) NSString *ballotInfoUrl;

/** The mailing address of this administrative body. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2SimpleAddressType *correspondenceAddress;

/**
 *  A URL provided by this administrative body for looking up general election
 *  information.
 */
@property(nonatomic, copy, nullable) NSString *electionInfoUrl;

/**
 *  A last minute or emergency notification text provided by this administrative
 *  body.
 */
@property(nonatomic, copy, nullable) NSString *electionNoticeText;

/**
 *  A URL provided by this administrative body for additional information
 *  related to the last minute or emergency notification.
 */
@property(nonatomic, copy, nullable) NSString *electionNoticeUrl;

/** The election officials for this election administrative body. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2ElectionOfficial *> *electionOfficials;

/**
 *  A URL provided by this administrative body for confirming that the voter is
 *  registered to vote.
 */
@property(nonatomic, copy, nullable) NSString *electionRegistrationConfirmationUrl;

/**
 *  A URL provided by this administrative body for looking up how to register to
 *  vote.
 */
@property(nonatomic, copy, nullable) NSString *electionRegistrationUrl;

/**
 *  A URL provided by this administrative body describing election rules to the
 *  voter.
 */
@property(nonatomic, copy, nullable) NSString *electionRulesUrl;

/** A description of the hours of operation for this administrative body. */
@property(nonatomic, copy, nullable) NSString *hoursOfOperation;

/** The name of this election administrative body. */
@property(nonatomic, copy, nullable) NSString *name;

/** The physical address of this administrative body. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2SimpleAddressType *physicalAddress;

/** A description of the services this administrative body may provide. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *voterServices;

/**
 *  A URL provided by this administrative body for looking up where to vote.
 */
@property(nonatomic, copy, nullable) NSString *votingLocationFinderUrl;

@end


/**
 *  Information about a candidate running for elected office.
 */
@interface GTLRCivicInfo_SchemaV2Candidate : GTLRObject

/** The URL for the candidate's campaign web site. */
@property(nonatomic, copy, nullable) NSString *candidateUrl;

/** A list of known (social) media channels for this candidate. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Channel *> *channels;

/** The email address for the candidate's campaign. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  The candidate's name. If this is a joint ticket it will indicate the name of
 *  the candidate at the top of a ticket followed by a / and that name of
 *  candidate at the bottom of the ticket. e.g. "Mitt Romney / Paul Ryan"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The order the candidate appears on the ballot for this contest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *orderOnBallot;

/** The full name of the party the candidate is a member of. */
@property(nonatomic, copy, nullable) NSString *party;

/** The voice phone number for the candidate's campaign office. */
@property(nonatomic, copy, nullable) NSString *phone;

/** A URL for a photo of the candidate. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

@end


/**
 *  A social media or web channel for a candidate.
 */
@interface GTLRCivicInfo_SchemaV2Channel : GTLRObject

/**
 *  The unique public identifier for the candidate's channel.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The type of channel. The following is a list of types of channels, but is
 *  not exhaustive. More channel types may be added at a later time. One of:
 *  GooglePlus, YouTube, Facebook, Twitter
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Information about a contest that appears on a voter's ballot.
 */
@interface GTLRCivicInfo_SchemaV2Contest : GTLRObject

/**
 *  A number specifying the position of this contest on the voter's ballot.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ballotPlacement;

/**
 *  The official title on the ballot for this contest, only where available.
 */
@property(nonatomic, copy, nullable) NSString *ballotTitle;

/** The candidate choices for this contest. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Candidate *> *candidates;

/** Information about the electoral district that this contest is in. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2ElectoralDistrict *district;

/**
 *  A description of any additional eligibility requirements for voting in this
 *  contest.
 */
@property(nonatomic, copy, nullable) NSString *electorateSpecifications;

/**
 *  The levels of government of the office for this contest. There may be more
 *  than one in cases where a jurisdiction effectively acts at two different
 *  levels of government; for example, the mayor of the District of Columbia
 *  acts at "locality" level, but also effectively at both
 *  "administrative-area-2" and "administrative-area-1".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *level;

/**
 *  The number of candidates that will be elected to office in this contest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numberElected;

/**
 *  The number of candidates that a voter may vote for in this contest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numberVotingFor;

/** The name of the office for this contest. */
@property(nonatomic, copy, nullable) NSString *office;

/**
 *  If this is a partisan election, the name of the party/parties it is for.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *primaryParties;

/**
 *  The set of ballot responses for the referendum. A ballot response represents
 *  a line on the ballot. Common examples might include "yes" or "no" for
 *  referenda. This field is only populated for contests of type 'Referendum'.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *referendumBallotResponses;

/**
 *  Specifies a short summary of the referendum that is typically on the ballot
 *  below the title but above the text. This field is only populated for
 *  contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumBrief;

/**
 *  A statement in opposition to the referendum. It does not necessarily appear
 *  on the ballot. This field is only populated for contests of type
 *  'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumConStatement;

/**
 *  Specifies what effect abstaining (not voting) on the proposition will have
 *  (i.e. whether abstaining is considered a vote against it). This field is
 *  only populated for contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumEffectOfAbstain;

/**
 *  The threshold of votes that the referendum needs in order to pass, e.g.
 *  "two-thirds". This field is only populated for contests of type
 *  'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumPassageThreshold;

/**
 *  A statement in favor of the referendum. It does not necessarily appear on
 *  the ballot. This field is only populated for contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumProStatement;

/**
 *  A brief description of the referendum. This field is only populated for
 *  contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumSubtitle;

/**
 *  The full text of the referendum. This field is only populated for contests
 *  of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumText;

/**
 *  The title of the referendum (e.g. 'Proposition 42'). This field is only
 *  populated for contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumTitle;

/**
 *  A link to the referendum. This field is only populated for contests of type
 *  'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumUrl;

/** The roles which this office fulfills. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *roles;

/**
 *  A list of sources for this contest. If multiple sources are listed, the data
 *  has been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Source *> *sources;

/**
 *  "Yes" or "No" depending on whether this a contest being held outside the
 *  normal election cycle.
 */
@property(nonatomic, copy, nullable) NSString *special;

/**
 *  The type of contest. Usually this will be 'General', 'Primary', or 'Run-off'
 *  for contests with candidates. For referenda this will be 'Referendum'. For
 *  Retention contests this will typically be 'Retention'.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Information about the election that was queried.
 */
@interface GTLRCivicInfo_SchemaV2Election : GTLRObject

/** Day of the election in YYYY-MM-DD format. */
@property(nonatomic, copy, nullable) NSString *electionDay;

/**
 *  The unique ID of this election.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/** A displayable name for the election. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The political division of the election. Represented as an OCD Division ID.
 *  Voters within these political jurisdictions are covered by this election.
 *  This is typically a state such as ocd-division/country:us/state:ca or for
 *  the midterms or general election the entire US (i.e.
 *  ocd-division/country:us).
 */
@property(nonatomic, copy, nullable) NSString *ocdDivisionId;

/**
 *  shapeLookupBehavior
 *
 *  Likely values:
 *    @arg @c kGTLRCivicInfo_SchemaV2Election_ShapeLookupBehavior_ShapeLookupDefault
 *        Value "shapeLookupDefault"
 *    @arg @c kGTLRCivicInfo_SchemaV2Election_ShapeLookupBehavior_ShapeLookupDisabled
 *        Value "shapeLookupDisabled"
 *    @arg @c kGTLRCivicInfo_SchemaV2Election_ShapeLookupBehavior_ShapeLookupEnabled
 *        Value "shapeLookupEnabled"
 */
@property(nonatomic, copy, nullable) NSString *shapeLookupBehavior;

@end


/**
 *  Information about individual election officials.
 */
@interface GTLRCivicInfo_SchemaV2ElectionOfficial : GTLRObject

/** The email address of the election official. */
@property(nonatomic, copy, nullable) NSString *emailAddress;

/** The fax number of the election official. */
@property(nonatomic, copy, nullable) NSString *faxNumber;

/** The full name of the election official. */
@property(nonatomic, copy, nullable) NSString *name;

/** The office phone number of the election official. */
@property(nonatomic, copy, nullable) NSString *officePhoneNumber;

/** The title of the election official. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Describes the geographic scope of a contest.
 */
@interface GTLRCivicInfo_SchemaV2ElectoralDistrict : GTLRObject

/**
 *  An identifier for this district, relative to its scope. For example, the
 *  34th State Senate district would have id "34" and a scope of stateUpper.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The name of the district. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The geographic scope of this district. If unspecified the district's
 *  geography is not known. One of: national, statewide, congressional,
 *  stateUpper, stateLower, countywide, judicial, schoolBoard, cityWide,
 *  township, countyCouncil, cityCouncil, ward, special
 *
 *  Likely values:
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_CityCouncil Value
 *        "cityCouncil"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Citywide Value
 *        "citywide"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Congressional Value
 *        "congressional"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_CountyCouncil Value
 *        "countyCouncil"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Countywide Value
 *        "countywide"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Judicial Value
 *        "judicial"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_National Value
 *        "national"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_SchoolBoard Value
 *        "schoolBoard"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Special Value
 *        "special"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_StateLower Value
 *        "stateLower"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_StateUpper Value
 *        "stateUpper"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Statewide Value
 *        "statewide"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Township Value
 *        "township"
 *    @arg @c kGTLRCivicInfo_SchemaV2ElectoralDistrict_Scope_Ward Value "ward"
 */
@property(nonatomic, copy, nullable) NSString *scope;

@end


/**
 *  Describes a political geography.
 */
@interface GTLRCivicInfo_SchemaV2GeographicDivision : GTLRObject

/**
 *  Any other valid OCD IDs that refer to the same division.\\n\\nBecause OCD
 *  IDs are meant to be human-readable and at least somewhat predictable, there
 *  are occasionally several identifiers for a single division. These
 *  identifiers are defined to be equivalent to one another, and one is always
 *  indicated as the primary identifier. The primary identifier will be returned
 *  in ocd_id above, and any other equivalent valid identifiers will be returned
 *  in this list.\\n\\nFor example, if this division's OCD ID is
 *  ocd-division/country:us/district:dc, this will contain
 *  ocd-division/country:us/state:dc.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *alsoKnownAs;

/** The name of the division. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  List of indices in the offices array, one for each office elected from this
 *  division. Will only be present if includeOffices was true (or absent) in the
 *  request.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *officeIndices;

@end


/**
 *  A location where a voter can vote. This may be an early vote site, an
 *  election day voting location, or a drop off location for a completed ballot.
 */
@interface GTLRCivicInfo_SchemaV2PollingLocation : GTLRObject

/** The address of the location. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SchemaV2SimpleAddressType *address;

/**
 *  The last date that this early vote site or drop off location may be used.
 *  This field is not populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *endDate;

/**
 *  Latitude of the location, in degrees north of the equator. Note this field
 *  may not be available for some locations.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *latitude;

/**
 *  Longitude of the location, in degrees east of the Prime Meridian. Note this
 *  field may not be available for some locations.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *longitude;

/**
 *  The name of the early vote site or drop off location. This field is not
 *  populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Notes about this location (e.g. accessibility ramp or entrance to use). */
@property(nonatomic, copy, nullable) NSString *notes;

/** A description of when this location is open. */
@property(nonatomic, copy, nullable) NSString *pollingHours;

/**
 *  A list of sources for this location. If multiple sources are listed the data
 *  has been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SchemaV2Source *> *sources;

/**
 *  The first date that this early vote site or drop off location may be used.
 *  This field is not populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *startDate;

/**
 *  The services provided by this early vote site or drop off location. This
 *  field is not populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *voterServices;

@end


/**
 *  GTLRCivicInfo_SchemaV2Precinct
 */
@interface GTLRCivicInfo_SchemaV2Precinct : GTLRObject

/**
 *  ID of the AdministrationRegion message for this precinct. Corresponds to
 *  LocalityId xml tag.
 */
@property(nonatomic, copy, nullable) NSString *administrationRegionId;

/** ID(s) of the Contest message(s) for this precinct. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *contestId;

/**
 *  Required. Dataset ID. What datasets our Precincts come from.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *datasetId;

/** ID(s) of the PollingLocation message(s) for this precinct. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *earlyVoteSiteId;

/** ID(s) of the ElectoralDistrict message(s) for this precinct. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *electoralDistrictId;

/**
 *  Required. A unique identifier for this precinct.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Specifies if the precinct runs mail-only elections.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *mailOnly;

/** Required. The name of the precinct. */
@property(nonatomic, copy, nullable) NSString *name;

/** The number of the precinct. */
@property(nonatomic, copy, nullable) NSString *number;

/** Encouraged. The OCD ID of the precinct */
@property(nonatomic, strong, nullable) NSArray<NSString *> *ocdId;

/** ID(s) of the PollingLocation message(s) for this precinct. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *pollingLocationId;

/**
 *  ID(s) of the SpatialBoundary message(s) for this precinct. Used to specify a
 *  geometrical boundary of the precinct.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *spatialBoundaryId;

/**
 *  If present, this proto corresponds to one portion of split precinct. Other
 *  portions of this precinct are guaranteed to have the same `name`. If not
 *  present, this proto represents a full precicnt.
 */
@property(nonatomic, copy, nullable) NSString *splitName;

/** Specifies the ward the precinct is contained within. */
@property(nonatomic, copy, nullable) NSString *ward;

@end


/**
 *  A simple representation of an address.
 */
@interface GTLRCivicInfo_SchemaV2SimpleAddressType : GTLRObject

@property(nonatomic, strong, nullable) NSArray<NSString *> *addressLine;

/** The city or town for the address. */
@property(nonatomic, copy, nullable) NSString *city;

/** The street name and number of this address. */
@property(nonatomic, copy, nullable) NSString *line1;

/** The second line the address, if needed. */
@property(nonatomic, copy, nullable) NSString *line2;

/** The third line of the address, if needed. */
@property(nonatomic, copy, nullable) NSString *line3;

/** The name of the location. */
@property(nonatomic, copy, nullable) NSString *locationName;

/** The US two letter state abbreviation of the address. */
@property(nonatomic, copy, nullable) NSString *state;

/** The US Postal Zip Code of the address. */
@property(nonatomic, copy, nullable) NSString *zip;

@end


/**
 *  Contains information about the data source for the element containing it.
 */
@interface GTLRCivicInfo_SchemaV2Source : GTLRObject

/** The name of the data source. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Whether this data comes from an official government source.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *official;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
