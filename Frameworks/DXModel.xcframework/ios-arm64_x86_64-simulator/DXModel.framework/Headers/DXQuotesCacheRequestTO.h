
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesCacheRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO || defined(INCLUDE_DXQuotesCacheRequestTO))
#define DXQuotesCacheRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXQuotesCacheRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXQuotesCacheRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXQuotesCacheRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXQuotesCacheRequestTO *)change;

- (DXQuotesCacheRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXQuotesCacheRequestTO)

inline DXQuotesCacheRequestTO *DXQuotesCacheRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesCacheRequestTO *DXQuotesCacheRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesCacheRequestTO, EMPTY, DXQuotesCacheRequestTO *)

FOUNDATION_EXPORT void DXQuotesCacheRequestTO_init(DXQuotesCacheRequestTO *self);

FOUNDATION_EXPORT DXQuotesCacheRequestTO *new_DXQuotesCacheRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesCacheRequestTO *create_DXQuotesCacheRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesCacheRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO DXQuotesCacheRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesCacheRequestTO")
