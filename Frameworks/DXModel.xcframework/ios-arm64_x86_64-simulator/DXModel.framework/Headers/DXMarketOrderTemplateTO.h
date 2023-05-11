
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO || defined(INCLUDE_DXMarketOrderTemplateTO))
#define DXMarketOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 1
#define INCLUDE_DXPricedOrderTemplateTO 1
#include "DXPricedOrderTemplateTO.h"

@class DXMarketTypeEnum;
@class DXOrderValidationParamsTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXMarketOrderTemplateTO : DXPricedOrderTemplateTO
@property (readonly, class, strong) DXMarketOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, copy, class) NSString *MARKET_TYPE_KEY NS_SWIFT_NAME(MARKET_TYPE_KEY);

+ (DXMarketOrderTemplateTO *)EMPTY;

+ (NSString *)MARKET_TYPE_KEY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXMarketTypeEnum *)getMarketTypeEnum;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMarketTypeEnumWithDXMarketTypeEnum:(DXMarketTypeEnum *)marketTypeEnum;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarketOrderTemplateTO)

inline DXMarketOrderTemplateTO *DXMarketOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketOrderTemplateTO *DXMarketOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketOrderTemplateTO, EMPTY, DXMarketOrderTemplateTO *)

inline NSString *DXMarketOrderTemplateTO_get_MARKET_TYPE_KEY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMarketOrderTemplateTO_MARKET_TYPE_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketOrderTemplateTO, MARKET_TYPE_KEY, NSString *)

FOUNDATION_EXPORT void DXMarketOrderTemplateTO_init(DXMarketOrderTemplateTO *self);

FOUNDATION_EXPORT DXMarketOrderTemplateTO *new_DXMarketOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketOrderTemplateTO *create_DXMarketOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO DXMarketOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateMarketOrderTemplateTO")
