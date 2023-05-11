
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXKeyValuesTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO || defined(INCLUDE_DXKeyValuesTO))
#define DXKeyValuesTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include "java/lang/Iterable.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol PSTransferObject;

@interface DXKeyValuesTO : PSBaseTransferObject < JavaLangIterable >
@property (readonly, class, strong) DXKeyValuesTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXKeyValuesTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXKeyValuesTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXKeyValuesTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (PSBaseTransferObject *)java_clone;

- (NSString *)lookupWithNSString:(NSString *)key;

- (jboolean)makeReadOnly;

- (void)putWithNSString:(NSString *)key
           withNSString:(NSString *)value;

- (NSString *)removeWithNSString:(NSString *)key;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(DXKeyValuesTO)

inline DXKeyValuesTO *DXKeyValuesTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXKeyValuesTO *DXKeyValuesTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXKeyValuesTO, EMPTY, DXKeyValuesTO *)

FOUNDATION_EXPORT void DXKeyValuesTO_init(DXKeyValuesTO *self);

FOUNDATION_EXPORT DXKeyValuesTO *new_DXKeyValuesTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXKeyValuesTO *create_DXKeyValuesTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXKeyValuesTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUtilKeyValuesTO DXKeyValuesTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilKeyValuesTO")
