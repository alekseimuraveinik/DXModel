
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountMetricTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO || defined(INCLUDE_DXAccountMetricTO))
#define DXAccountMetricTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountMetricTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAccountMetricTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountMetricTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountMetricTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)key
                                  withLong:(jlong)value;

- (instancetype __nonnull)initWithNSString:(NSString *)key
                                  withLong:(jlong)value
               withDXAccountMetricTypeEnum:(DXAccountMetricTypeEnum *)type;

- (DXAccountMetricTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountMetricTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getKey;

- (DXAccountMetricTypeEnum *)getType;

- (jlong)getValue;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setKeyWithNSString:(NSString *)key;

- (void)setTypeWithDXAccountMetricTypeEnum:(DXAccountMetricTypeEnum *)type;

- (void)setValueWithLong:(jlong)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountMetricTO)

inline DXAccountMetricTO *DXAccountMetricTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountMetricTO *DXAccountMetricTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountMetricTO, EMPTY, DXAccountMetricTO *)

FOUNDATION_EXPORT void DXAccountMetricTO_initWithNSString_withLong_withDXAccountMetricTypeEnum_(DXAccountMetricTO *self, NSString *key, jlong value, DXAccountMetricTypeEnum *type);

FOUNDATION_EXPORT DXAccountMetricTO *new_DXAccountMetricTO_initWithNSString_withLong_withDXAccountMetricTypeEnum_(NSString *key, jlong value, DXAccountMetricTypeEnum *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountMetricTO *create_DXAccountMetricTO_initWithNSString_withLong_withDXAccountMetricTypeEnum_(NSString *key, jlong value, DXAccountMetricTypeEnum *type);

FOUNDATION_EXPORT void DXAccountMetricTO_initWithNSString_withLong_(DXAccountMetricTO *self, NSString *key, jlong value);

FOUNDATION_EXPORT DXAccountMetricTO *new_DXAccountMetricTO_initWithNSString_withLong_(NSString *key, jlong value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountMetricTO *create_DXAccountMetricTO_initWithNSString_withLong_(NSString *key, jlong value);

FOUNDATION_EXPORT void DXAccountMetricTO_init(DXAccountMetricTO *self);

FOUNDATION_EXPORT DXAccountMetricTO *new_DXAccountMetricTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountMetricTO *create_DXAccountMetricTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountMetricTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountMetricTO DXAccountMetricTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTO")
