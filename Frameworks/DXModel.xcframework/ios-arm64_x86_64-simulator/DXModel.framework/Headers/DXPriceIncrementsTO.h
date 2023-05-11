
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPriceIncrementsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO || defined(INCLUDE_DXPriceIncrementsTO))
#define DXPriceIncrementsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class IOSDoubleArray;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSLongListTO;
@protocol PSTransferObject;

@interface DXPriceIncrementsTO : PSBaseTransferObject
@property (readonly, class, strong) DXPriceIncrementsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPriceIncrementsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDouble:(jdouble)increment;

- (instancetype __nonnull)initWithDoubleArray:(IOSDoubleArray *)increments;

- (DXPriceIncrementsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPriceIncrementsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSLongListTO *)getPriceIncrements;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPriceIncrementsWithPSLongListTO:(PSLongListTO *)priceIncrements;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPriceIncrementsTO)

inline DXPriceIncrementsTO *DXPriceIncrementsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPriceIncrementsTO *DXPriceIncrementsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPriceIncrementsTO, EMPTY, DXPriceIncrementsTO *)

FOUNDATION_EXPORT void DXPriceIncrementsTO_initWithDouble_(DXPriceIncrementsTO *self, jdouble increment);

FOUNDATION_EXPORT DXPriceIncrementsTO *new_DXPriceIncrementsTO_initWithDouble_(jdouble increment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPriceIncrementsTO *create_DXPriceIncrementsTO_initWithDouble_(jdouble increment);

FOUNDATION_EXPORT void DXPriceIncrementsTO_initWithDoubleArray_(DXPriceIncrementsTO *self, IOSDoubleArray *increments);

FOUNDATION_EXPORT DXPriceIncrementsTO *new_DXPriceIncrementsTO_initWithDoubleArray_(IOSDoubleArray *increments) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPriceIncrementsTO *create_DXPriceIncrementsTO_initWithDoubleArray_(IOSDoubleArray *increments);

FOUNDATION_EXPORT void DXPriceIncrementsTO_init(DXPriceIncrementsTO *self);

FOUNDATION_EXPORT DXPriceIncrementsTO *new_DXPriceIncrementsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPriceIncrementsTO *create_DXPriceIncrementsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPriceIncrementsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO DXPriceIncrementsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilPriceIncrementsTO")
