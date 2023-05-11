
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListWithSelectionTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilListWithSelectionTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListWithSelectionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListWithSelectionTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilListWithSelectionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSListWithSelectionTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListWithSelectionTO || defined(INCLUDE_PSListWithSelectionTO))
#define PSListWithSelectionTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface PSListWithSelectionTO : PSBaseTransferObject

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSListTO:(PSListTO *)list
                                   withInt:(jint)selection;

- (PSListWithSelectionTO *)change;

- (jint)clearSelection;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSListWithSelectionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

+ (PSListWithSelectionTO *)empty;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getList;

- (id<PSTransferObject>)getSelectedItem;

- (jint)getSelection;

- (NSUInteger)hash;

- (jboolean)hasSelection;

- (jboolean)makeReadOnly;

- (jint)selectWithInt:(jint)index;

- (jint)selectItemWithPSTransferObject:(id<PSTransferObject>)item;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setWithPSListTO:(PSListTO *)list
                withInt:(jint)selection;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSListWithSelectionTO)

FOUNDATION_EXPORT PSListWithSelectionTO *PSListWithSelectionTO_empty(void);

FOUNDATION_EXPORT void PSListWithSelectionTO_init(PSListWithSelectionTO *self);

FOUNDATION_EXPORT PSListWithSelectionTO *new_PSListWithSelectionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSListWithSelectionTO *create_PSListWithSelectionTO_init(void);

FOUNDATION_EXPORT void PSListWithSelectionTO_initWithPSListTO_withInt_(PSListWithSelectionTO *self, PSListTO *list, jint selection);

FOUNDATION_EXPORT PSListWithSelectionTO *new_PSListWithSelectionTO_initWithPSListTO_withInt_(PSListTO *list, jint selection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSListWithSelectionTO *create_PSListWithSelectionTO_initWithPSListTO_withInt_(PSListTO *list, jint selection);

J2OBJC_TYPE_LITERAL_HEADER(PSListWithSelectionTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilListWithSelectionTO PSListWithSelectionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListWithSelectionTO")
