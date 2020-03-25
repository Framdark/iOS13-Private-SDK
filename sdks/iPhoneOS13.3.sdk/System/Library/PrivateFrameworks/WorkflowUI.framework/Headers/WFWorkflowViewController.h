//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/CKComponentProvider-Protocol.h>
#import <WorkflowUI/CKSupplementaryViewDataSource-Protocol.h>
#import <WorkflowUI/WFCollectionViewDelegateModulesLayout-Protocol.h>
#import <WorkflowUI/WFModuleDelegate-Protocol.h>
#import <WorkflowUI/WFVariableUIDelegate-Protocol.h>

@class CKCollectionViewTransactionalDataSource, NSIndexPath, UICollectionView, WFContentClassesToolbar, WFModulesCollectionViewLayout, WFScrollPositionPinningCollectionView, WFWorkflow, WFWorkflowModuleIndentationCache;
@protocol UIScrollViewDelegate, WFComponentNavigationContext, WFContentClassesToolbarDelegate, WFModuleModelProvider, WFModulesCollectionViewDelegate, WFModulesSupplementaryViewDataSource, WFWorkflowViewControllerDelegate;

@interface WFWorkflowViewController : UIViewController <CKComponentProvider, CKSupplementaryViewDataSource, WFCollectionViewDelegateModulesLayout, WFVariableUIDelegate, WFModuleDelegate>
{
    BOOL _alwaysBounceCollectionViewVertically;
    BOOL _allowsAcceptsToolbar;
    id <WFWorkflowViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    NSUInteger _workflowViewStyle;
    WFScrollPositionPinningCollectionView *_pinningCollectionView;
    id <WFComponentNavigationContext> _context;
    /* void * CDUnknownFunctionPointerType _cellConfigurationFunction */;
    double _currentModuleWidth;
    NSIndexPath *_actionOutputIndexPath;
    id /* CDUnknownBlockType */ _actionOutputCompletionHandler;
    CKCollectionViewTransactionalDataSource *_dataSource;
    WFModulesCollectionViewLayout *_collectionViewLayout;
    id <WFContentClassesToolbarDelegate> _acceptsToolbarDelegate;
    id <WFModulesCollectionViewDelegate> _collectionViewDelegate;
    id <WFModulesSupplementaryViewDataSource> _supplementaryViewDataSource;
    id <WFModuleModelProvider> _modelProvider;
    WFWorkflowModuleIndentationCache *_indentationCache;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    double _maximumModuleWidth;
    double _maximumContentWidth;
    WFContentClassesToolbar *_acceptsToolbar;
    CGSize _viewSize;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
+ (id)moduleAppearanceForStyle:(NSUInteger)arg1;
@property(readonly, nonatomic) __weak WFContentClassesToolbar *acceptsToolbar; // @synthesize acceptsToolbar=_acceptsToolbar;
@property(nonatomic) BOOL allowsAcceptsToolbar; // @synthesize allowsAcceptsToolbar=_allowsAcceptsToolbar;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) double maximumModuleWidth; // @synthesize maximumModuleWidth=_maximumModuleWidth;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(readonly, nonatomic) WFWorkflowModuleIndentationCache *indentationCache; // @synthesize indentationCache=_indentationCache;
@property(nonatomic) __weak id <WFModuleModelProvider> modelProvider; // @synthesize modelProvider=_modelProvider;
@property(nonatomic) __weak id <WFModulesSupplementaryViewDataSource> supplementaryViewDataSource; // @synthesize supplementaryViewDataSource=_supplementaryViewDataSource;
@property(nonatomic) __weak id <WFModulesCollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(nonatomic) __weak id <WFContentClassesToolbarDelegate> acceptsToolbarDelegate; // @synthesize acceptsToolbarDelegate=_acceptsToolbarDelegate;
@property(readonly, nonatomic) __weak WFModulesCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) CKCollectionViewTransactionalDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionOutputCompletionHandler; // @synthesize actionOutputCompletionHandler=_actionOutputCompletionHandler;
@property(retain, nonatomic) NSIndexPath *actionOutputIndexPath; // @synthesize actionOutputIndexPath=_actionOutputIndexPath;
@property(nonatomic) CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) double currentModuleWidth; // @synthesize currentModuleWidth=_currentModuleWidth;
@property(readonly, nonatomic) /* void * CDUnknownFunctionPointerType cellConfigurationFunction */; // @synthesize cellConfigurationFunction=_cellConfigurationFunction;
@property(readonly, nonatomic) id <WFComponentNavigationContext> context; // @synthesize context=_context;
@property(nonatomic) __weak WFScrollPositionPinningCollectionView *pinningCollectionView; // @synthesize pinningCollectionView=_pinningCollectionView;
@property(readonly, nonatomic) NSUInteger workflowViewStyle; // @synthesize workflowViewStyle=_workflowViewStyle;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFWorkflowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)invalidateActionConnections;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderInSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 itemAtIndexPath:(id)arg3 isConnectedToItemAtIndexPath:(id)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 verticalOffsetForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)generateNewModelsAndReload;
- (double)moduleWidthForViewSize:(CGSize)arg1;
- (id)createModelForAction:(id)arg1;
- (NSUInteger)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* CDUnknownBlockType */)arg3 goBackHandler:(id /* CDUnknownBlockType */)arg4 scrolledAwayHandler:(id /* CDUnknownBlockType */)arg5;
- (void)cancelActionOutputPicking;
- (void)tappedOutputToken:(id)arg1 withModel:(id)arg2;
- (void)removeOutputTokens;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)indexPathOfCellContainingResponder:(id)arg1;
- (id)indexPathOfCellWithSubview:(id)arg1;
- (void)textSizeChanged;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
@property(nonatomic) BOOL alwaysBounceCollectionViewVertically; // @synthesize alwaysBounceCollectionViewVertically=_alwaysBounceCollectionViewVertically;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
- (void)loadView;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 style:(NSUInteger)arg2 context:(id)arg3 cellConfigurationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg4;
- (id)initWithWorkflow:(id)arg1 style:(NSUInteger)arg2;

@end
