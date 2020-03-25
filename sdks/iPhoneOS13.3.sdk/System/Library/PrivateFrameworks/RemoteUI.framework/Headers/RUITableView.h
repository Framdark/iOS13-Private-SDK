//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUITableViewRowDelegate-Protocol.h>
#import <RemoteUI/RUITopLevelPageElement-Protocol.h>
#import <RemoteUI/RUIWebViewDelegate-Protocol.h>

@class NSDate, NSDictionary, NSIndexPath, NSMutableArray, NSString, RUIBarButtonItem, RUIFooterElement, RUIHeaderElement, RUIObjectModel, RUIPage, RUISubHeaderElement, RUITableViewRow, UIDatePicker, UIPickerView, UITableView, UIView, _UIBackdropView;
@protocol RUIHeader;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, RUITableViewRowDelegate, RUITopLevelPageElement, RUIWebViewDelegate>
{
    NSMutableArray *_sections;
    UITableView *_tableView;
    BOOL _showSelectPicker;
    UIDatePicker *_datePicker;
    BOOL _showDatePicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    NSIndexPath *_embeddedPickerRowIndexPath;
    RUITableViewRow *_defaultFirstResponderRow;
    BOOL _registeredForNotifications;
    float _lastLayoutWidth;
    float _fullscreenCellHeight;
    BOOL _showingPickerNavBarButtons;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    UIView<RUIHeader> *_headerView;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIHeaderElement *_header;
    RUISubHeaderElement *_subHeader;
    RUIFooterElement *_footer;
    NSString *_headerTitle;
    UIPickerView *_selectPicker;
}

+ (void)_enableTestMode;
@property(retain, nonatomic) UIPickerView *selectPicker; // @synthesize selectPicker=_selectPicker;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) RUIFooterElement *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) RUISubHeaderElement *subHeader; // @synthesize subHeader=_subHeader;
@property(retain, nonatomic) RUIHeaderElement *header; // @synthesize header=_header;
@property(nonatomic) __weak RUIPage *page; // @synthesize page=_page;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) RUITableViewRow *defaultFirstResponderRow; // @synthesize defaultFirstResponderRow=_defaultFirstResponderRow;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
// - (void).cxx_destruct;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)rowIsFirstResponder:(id)arg1;
- (void)rowDidChange:(id)arg1 action:(int)arg2;
- (BOOL)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)rowDidEndEditing:(id)arg1;
- (void)_enumerateRowsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)sourceURL;
- (id)sourceURLForRUITableViewRow;
- (BOOL)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_textChanged:(id)arg1;
- (void)textFieldStartedEditing:(id)arg1;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic, getter=isShowingPicker) BOOL showingPicker;
- (CGRect)_selectPickerFrame;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hidePickerViewAnimated:(BOOL)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)_datePickerRevert;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (void)viewDidLayout;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)_loadHeaderView;
- (id)titleLabel;
- (CGSize)_tableHeaderSizeForHeader:(id)arg1;
@property(readonly, nonatomic) UIView<RUIHeader> *headerView;
@property(retain, nonatomic) NSDictionary *footerViewAttributes;
@property(readonly, nonatomic) NSDictionary *headerViewAttributes;
- (void)setEditing:(BOOL)arg1;
- (void)removeRowAtIndexPath:(id)arg1;
- (void)insertRow:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadHeadersAndFootersForSection:(id)arg1;
- (void)_setBottomInset:(float)arg1;
- (void)_clearPickers;
- (id)rowWithIdentifier:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)objectModelRowForIndexPath:(id)arg1;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (id)subElementsWithName:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)tableView;
- (id)view;
- (void)dealloc;
- (void)_registerForNotifications:(BOOL)arg1;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (id)staticValues;

@end
