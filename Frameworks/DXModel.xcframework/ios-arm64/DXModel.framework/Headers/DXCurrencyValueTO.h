
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCurrencyValueTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO || defined(INCLUDE_DXCurrencyValueTO))
#define DXCurrencyValueTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCurrencyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCurrencyValueTO : PSBaseTransferObject
@property (readonly, class, strong) DXCurrencyValueTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCurrencyValueTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCurrencyValueTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCurrencyValueTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXCurrencyTO *)getCurrency;

- (jlong)getValue;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCurrencyWithDXCurrencyTO:(DXCurrencyTO *)currency;

- (void)setValueWithLong:(jlong)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCurrencyValueTO)

inline DXCurrencyValueTO *DXCurrencyValueTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCurrencyValueTO *DXCurrencyValueTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCurrencyValueTO, EMPTY, DXCurrencyValueTO *)

FOUNDATION_EXPORT void DXCurrencyValueTO_init(DXCurrencyValueTO *self);

FOUNDATION_EXPORT DXCurrencyValueTO *new_DXCurrencyValueTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCurrencyValueTO *create_DXCurrencyValueTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCurrencyValueTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO DXCurrencyValueTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilCurrencyValueTO")
