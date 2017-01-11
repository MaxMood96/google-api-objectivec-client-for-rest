// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Manufacturer Center API (manufacturers/v1)
// Description:
//   Public API for managing Manufacturer Center related data.
// Documentation:
//   https://developers.google.com/manufacturers/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRManufacturerCenter_Attributes;
@class GTLRManufacturerCenter_Issue;
@class GTLRManufacturerCenter_Product;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRManufacturerCenter_Issue.severity

/**
 *  Error severity. The issue prevents the usage of the whole item.
 *
 *  Value: "ERROR"
 */
GTLR_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_Error;
/**
 *  Info severity. The issue is one that doesn't require immediate attention.
 *  It is, for example, used to communicate which attributes are still
 *  pending review.
 *
 *  Value: "INFO"
 */
GTLR_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_Info;
/**
 *  Unspecified severity, never used.
 *
 *  Value: "SEVERITY_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_SeverityUnspecified;
/**
 *  Warning severity. The issue is either one that prevents the usage of the
 *  attribute that triggered it or one that will soon prevent the usage of
 *  the whole item.
 *
 *  Value: "WARNING"
 */
GTLR_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_Warning;

/**
 *  Attributes of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116.
 */
@interface GTLRManufacturerCenter_Attributes : GTLRObject

/**
 *  The brand name of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#brand.
 */
@property(nonatomic, copy, nullable) NSString *brand;

/**
 *  The Global Trade Item Number (GTIN) of the product. For more information,
 *  see https://support.google.com/manufacturers/answer/6124116#gtin.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *gtin;

/**
 *  The Manufacturer Part Number (MPN) of the product. For more information,
 *  see https://support.google.com/manufacturers/answer/6124116#mpn.
 */
@property(nonatomic, copy, nullable) NSString *mpn;

/**
 *  The name of the group of products related to the product. For more
 *  information, see
 *  https://support.google.com/manufacturers/answer/6124116#productline.
 */
@property(nonatomic, copy, nullable) NSString *productLine;

/**
 *  The canonical name of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#productname.
 */
@property(nonatomic, copy, nullable) NSString *productName;

/**
 *  The URL of the manufacturer's detail page of the product. For more
 *  information, see
 *  https://support.google.com/manufacturers/answer/6124116#productpage.
 */
@property(nonatomic, copy, nullable) NSString *productPageUrl;

/**
 *  The manufacturer's category of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#producttype.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *productType;

/**
 *  The title of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#title.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Product issue.
 */
@interface GTLRManufacturerCenter_Issue : GTLRObject

/**
 *  If present, the attribute that triggered the issue. For more information
 *  about attributes, see
 *  https://support.google.com/manufacturers/answer/6124116.
 */
@property(nonatomic, copy, nullable) NSString *attribute;

/**
 *  Description of the issue.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The severity of the issue.
 *
 *  Likely values:
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_Error Error severity. The
 *        issue prevents the usage of the whole item. (Value: "ERROR")
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_Info Info severity. The
 *        issue is one that doesn't require immediate attention.
 *        It is, for example, used to communicate which attributes are still
 *        pending review. (Value: "INFO")
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_SeverityUnspecified
 *        Unspecified severity, never used. (Value: "SEVERITY_UNSPECIFIED")
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_Warning Warning severity.
 *        The issue is either one that prevents the usage of the
 *        attribute that triggered it or one that will soon prevent the usage of
 *        the whole item. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *severity;

/**
 *  The server-generated type of the issue, for example,
 *  “INCORRECT_TEXT_FORMATTING”, “IMAGE_NOT_SERVEABLE”, etc.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRManufacturerCenter_ListProductsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "products" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRManufacturerCenter_ListProductsResponse : GTLRCollectionObject

/** The token for the retrieval of the next page of product statuses. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of the products.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_Product *> *products;

@end


/**
 *  Product data.
 */
@interface GTLRManufacturerCenter_Product : GTLRObject

/**
 *  The content language of the product as a two-letter ISO 639-1 language code
 *  (for example, en).
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *contentLanguage;

/**
 *  Final attributes of the product. The final attributes are obtained by
 *  overriding the uploaded attributes with the manually provided and deleted
 *  attributes. Google systems only process, evaluate, review, and/or use final
 *  attributes.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Attributes *finalAttributes;

/**
 *  A server-generated list of issues associated with the product.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_Issue *> *issues;

/**
 *  Names of the attributes of the product deleted manually via the
 *  Manufacturer Center UI.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *manuallyDeletedAttributes;

/**
 *  Attributes of the product provided manually via the Manufacturer Center UI.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Attributes *manuallyProvidedAttributes;

/**
 *  Name in the format `{target_country}:{content_language}:{product_id}`.
 *  `target_country` - The target country of the product as a CLDR territory
 *  code (for example, US).
 *  `content_language` - The content language of the product as a two-letter
 *  ISO 639-1 language code (for example, en).
 *  `product_id` - The ID of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#id.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Parent ID in the format `accounts/{account_id}`.
 *  `account_id` - The ID of the Manufacturer Center account.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The ID of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#id.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *productId;

/**
 *  The target country of the product as a CLDR territory code (for example,
 *  US).
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *targetCountry;

/**
 *  Attributes of the product uploaded via the Manufacturer Center API or via
 *  feeds.
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Attributes *uploadedAttributes;

@end

NS_ASSUME_NONNULL_END