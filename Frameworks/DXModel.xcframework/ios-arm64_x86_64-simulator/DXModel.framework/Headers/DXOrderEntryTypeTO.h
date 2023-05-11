
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEntryTypeTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO || defined(INCLUDE_DXOrderEntryTypeTO))
#define DXOrderEntryTypeTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXKeyValuesTO;
@class DXOrderEntryTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderEntryTypeTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderEntryTypeTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderEntryTypeTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderEntryTypeTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderEntryTypeTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXKeyValuesTO *)getParameters;

- (DXOrderEntryTypeEnum *)getType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setParametersWithDXKeyValuesTO:(DXKeyValuesTO *)parameters;

- (void)setTypeWithDXOrderEntryTypeEnum:(DXOrderEntryTypeEnum *)type;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderEntryTypeTO)

inline DXOrderEntryTypeTO *DXOrderEntryTypeTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeTO *DXOrderEntryTypeTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeTO, EMPTY, DXOrderEntryTypeTO *)

FOUNDATION_EXPORT void DXOrderEntryTypeTO_init(DXOrderEntryTypeTO *self);

FOUNDATION_EXPORT DXOrderEntryTypeTO *new_DXOrderEntryTypeTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEntryTypeTO *create_DXOrderEntryTypeTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEntryTypeTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO DXOrderEntryTypeTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeTO")
