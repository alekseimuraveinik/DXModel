
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUserInfoResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO || defined(INCLUDE_DXUserInfoResponseTO))
#define DXUserInfoResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXKeyValuesTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXUserInfoResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXUserInfoResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXUserInfoResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXKeyValuesTO:(DXKeyValuesTO *)userData
                                   withPSListTO:(PSListTO *)menuItems;

- (DXUserInfoResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXUserInfoResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getMenuItems;

- (DXKeyValuesTO *)getUserData;

- (NSString *)getUserDataWithNSString:(NSString *)key;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMenuItemsWithPSListTO:(PSListTO *)menuItems;

- (void)setUserDataWithDXKeyValuesTO:(DXKeyValuesTO *)userData;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXUserInfoResponseTO)

inline DXUserInfoResponseTO *DXUserInfoResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserInfoResponseTO *DXUserInfoResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserInfoResponseTO, EMPTY, DXUserInfoResponseTO *)

FOUNDATION_EXPORT void DXUserInfoResponseTO_initWithDXKeyValuesTO_withPSListTO_(DXUserInfoResponseTO *self, DXKeyValuesTO *userData, PSListTO *menuItems);

FOUNDATION_EXPORT DXUserInfoResponseTO *new_DXUserInfoResponseTO_initWithDXKeyValuesTO_withPSListTO_(DXKeyValuesTO *userData, PSListTO *menuItems) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserInfoResponseTO *create_DXUserInfoResponseTO_initWithDXKeyValuesTO_withPSListTO_(DXKeyValuesTO *userData, PSListTO *menuItems);

FOUNDATION_EXPORT void DXUserInfoResponseTO_init(DXUserInfoResponseTO *self);

FOUNDATION_EXPORT DXUserInfoResponseTO *new_DXUserInfoResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserInfoResponseTO *create_DXUserInfoResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUserInfoResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO DXUserInfoResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoResponseTO")
