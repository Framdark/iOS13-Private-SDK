//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIBarButtonItemGroupOwner-Protocol.h>
#import <UIKitCore/_UIBarButtonItemViewOwner-Protocol.h>

@class NSArray, NSLayoutConstraint, NSLayoutDimension, NSMapTable, NSMutableArray, NSString, UIBarButtonItem, UIView, _UIBarButtonItemData, _UIButtonBarButtonVisualProvider, _UIButtonBarLayoutMetrics, _UIButtonBarStackView;
@protocol _UIButtonBarAppearanceDelegate, _UIButtonBarDelegate;

@interface _UIButtonBar : NSObject <_UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding>
{
    _UIButtonBarStackView *_stackView;
    NSLayoutDimension *_flexibleSpaceEqualSizeAnchor;
    NSLayoutDimension *_minimumInterItemSpaceAnchor;
    NSLayoutConstraint *_minimumInterItemSpaceConstraint;
    NSLayoutDimension *_minimumInterGroupSpaceAnchor;
    NSLayoutConstraint *_minimumInterGroupSpaceConstraint;
    UIView *_centeredView;
    NSLayoutConstraint *_centeringConstraint;
    _UIButtonBarLayoutMetrics *_layoutMetrics;
    NSMutableArray *_groupLayouts;
    NSMutableArray *_effectiveLayout;
    NSMapTable *_groupLayoutMap;
    NSMutableArray *_layoutViews;
    NSMutableArray *_layoutGuides;
    NSMutableArray *_layoutActiveConstraints;
    NSMapTable *_senderActionMap;
    struct {
        unsigned int isInLayoutReentrancyGuard:1;
        unsigned int needsAppearanceUpdate:1;
        unsigned int plainAppearanceChanged:1;
        unsigned int doneAppearanceChanged:1;
    } _buttonBarFlags;
    BOOL _itemsInGroupUseSameSize;
    BOOL _compact;
    NSArray *_barButtonGroups;
    double _minimumInterItemSpace;
    id <_UIButtonBarDelegate> _delegate;
    double _minimumInterGroupSpace;
    id /* CDUnknownBlockType */ _defaultActionFilter;
    id <_UIButtonBarAppearanceDelegate> __appearanceDelegate;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

+ (float)optionalConstraintsPriority;
@property(copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic, getter=_compact, setter=_setCompact:) BOOL compact; // @synthesize compact=_compact;
@property(retain, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(retain, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(nonatomic) __weak id <_UIButtonBarAppearanceDelegate> _appearanceDelegate; // @synthesize _appearanceDelegate=__appearanceDelegate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ defaultActionFilter; // @synthesize defaultActionFilter=_defaultActionFilter;
@property(nonatomic, getter=_minimumInterGroupSpace, setter=_setMinimumInterGroupSpace:) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property(nonatomic, getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:) BOOL itemsInGroupUseSameSize; // @synthesize itemsInGroupUseSameSize=_itemsInGroupUseSameSize;
@property(nonatomic) __weak id <_UIButtonBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property(copy, nonatomic) NSArray *barButtonGroups; // @synthesize barButtonGroups=_barButtonGroups;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_groupDidChangePriority:(id)arg1;
- (void)_groupDidChangeGeometry:(id)arg1;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_itemDidChangeSecondaryActionState:(id)arg1;
- (void)_itemDidChangeSecondaryActions:(id)arg1;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)doneItemAppearanceChanged;
- (void)plainItemAppearanceChanged;
- (void)_appearanceChanged;
- (void)_validateAllItems;
- (void)_reloadBarButtonGroups;
@property(readonly, nonatomic) UIBarButtonItem *ultimateFallbackItem;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_layoutBar;
- (id)_newGroupLayout:(id)arg1;
- (void)_setNeedsVisualUpdateAndNotify:(BOOL)arg1;
- (void)_setNeedsVisualUpdate;
- (id)_layoutForGroup:(id)arg1;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_setVisualProvider:(id)arg1;
@property(nonatomic) long long itemDistribution;
@property(nonatomic) BOOL allowsViewWrappers;
@property(nonatomic) BOOL createsPopoverLayoutGuides;
- (void)_updateToFitInWidth:(double)arg1;
- (double)_estimatedWidth;
@property(readonly, nonatomic, getter=_layoutWidth) double layoutWidth;
@property(readonly, nonatomic) UIView *view;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end
