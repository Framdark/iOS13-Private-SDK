//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFMediaSystemBuilder, HUMediaSystemEditorGridItemManager;
@protocol HUMediaSystemEditorGridViewControllerDelegate;

@interface HUMediaSystemEditorGridViewController : HUSelectableServiceGridViewController
{
    HFMediaSystemBuilder *_mediaSystemBuilder;
}

@property(readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // @synthesize mediaSystemBuilder=_mediaSystemBuilder;
- (void)_resetBuilder;
- (void)_addItemToMediaSystem:(id)arg1;
- (id)_accessoryVendorItemForItem:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)addItemToSelection:(id)arg1;
- (_Bool)_wantsToggleButtonForSection:(unsigned long long)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaSystemBuilder:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <HUMediaSystemEditorGridViewControllerDelegate> delegate;
@property(retain, nonatomic) HUMediaSystemEditorGridItemManager *itemManager; // @dynamic itemManager;

@end
