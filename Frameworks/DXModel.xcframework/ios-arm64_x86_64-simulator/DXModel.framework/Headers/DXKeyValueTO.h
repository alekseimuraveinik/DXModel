
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValueTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilKeyValueTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValueTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValueTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilKeyValueTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXKeyValueTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValueTO || defined(INCLUDE_DXKeyValueTO))
#define DXKeyValueTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXKeyValueTO : PSBaseTransferObject
@property (readonly, class, strong) DXKeyValueTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXKeyValueTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXKeyValueTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXKeyValueTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getKey;

- (NSString *)getValue;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setKeyWithNSString:(NSString *)key;

- (void)setValueWithNSString:(NSString *)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXKeyValueTO)

inline DXKeyValueTO *DXKeyValueTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXKeyValueTO *DXKeyValueTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXKeyValueTO, EMPTY, DXKeyValueTO *)

FOUNDATION_EXPORT void DXKeyValueTO_init(DXKeyValueTO *self);

FOUNDATION_EXPORT DXKeyValueTO *new_DXKeyValueTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXKeyValueTO *create_DXKeyValueTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXKeyValueTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUtilKeyValueTO DXKeyValueTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValueTO")
