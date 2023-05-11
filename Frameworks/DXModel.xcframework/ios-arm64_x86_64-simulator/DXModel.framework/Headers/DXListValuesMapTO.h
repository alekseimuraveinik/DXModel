
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXListValuesMapTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO || defined(INCLUDE_DXListValuesMapTO))
#define DXListValuesMapTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXListValuesMapTO : PSBaseTransferObject
@property (readonly, class, strong) DXListValuesMapTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXListValuesMapTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXListValuesMapTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXListValuesMapTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

+ (DXListValuesMapTO *)empty;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getAllValues;

- (PSListTO *)getIndexMap;

- (PSListTO *)getKeys;

- (PSListTO *)getValuesByKeyWithPSTransferObject:(id<PSTransferObject>)key;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAllValuesWithPSListTO:(PSListTO *)allValues;

- (void)setIndexMapWithPSListTO:(PSListTO *)indexMap;

- (void)setKeysWithPSListTO:(PSListTO *)keys;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXListValuesMapTO)

inline DXListValuesMapTO *DXListValuesMapTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXListValuesMapTO *DXListValuesMapTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXListValuesMapTO, EMPTY, DXListValuesMapTO *)

FOUNDATION_EXPORT void DXListValuesMapTO_init(DXListValuesMapTO *self);

FOUNDATION_EXPORT DXListValuesMapTO *new_DXListValuesMapTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXListValuesMapTO *create_DXListValuesMapTO_init(void);

FOUNDATION_EXPORT DXListValuesMapTO *DXListValuesMapTO_empty(void);

J2OBJC_TYPE_LITERAL_HEADER(DXListValuesMapTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUtilListValuesMapTO DXListValuesMapTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUtilListValuesMapTO")
