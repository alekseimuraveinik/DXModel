
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSingleQuoteResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO || defined(INCLUDE_DXSingleQuoteResponseTO))
#define DXSingleQuoteResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXQuoteTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXSingleQuoteResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXSingleQuoteResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSingleQuoteResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXQuoteTO:(DXQuoteTO *)quote;

- (DXSingleQuoteResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSingleQuoteResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXQuoteTO *)getQuote;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setQuoteWithDXQuoteTO:(DXQuoteTO *)quote;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSingleQuoteResponseTO)

inline DXSingleQuoteResponseTO *DXSingleQuoteResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSingleQuoteResponseTO *DXSingleQuoteResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSingleQuoteResponseTO, EMPTY, DXSingleQuoteResponseTO *)

FOUNDATION_EXPORT void DXSingleQuoteResponseTO_initWithDXQuoteTO_(DXSingleQuoteResponseTO *self, DXQuoteTO *quote);

FOUNDATION_EXPORT DXSingleQuoteResponseTO *new_DXSingleQuoteResponseTO_initWithDXQuoteTO_(DXQuoteTO *quote) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleQuoteResponseTO *create_DXSingleQuoteResponseTO_initWithDXQuoteTO_(DXQuoteTO *quote);

FOUNDATION_EXPORT void DXSingleQuoteResponseTO_init(DXSingleQuoteResponseTO *self);

FOUNDATION_EXPORT DXSingleQuoteResponseTO *new_DXSingleQuoteResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleQuoteResponseTO *create_DXSingleQuoteResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSingleQuoteResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO DXSingleQuoteResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteResponseTO")
