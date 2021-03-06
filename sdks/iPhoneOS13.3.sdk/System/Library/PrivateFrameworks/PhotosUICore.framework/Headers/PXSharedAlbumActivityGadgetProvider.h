//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXFeedSectionInfosManagerDelegate-Protocol.h>
#import <PhotosUICore/PXSharedAlbumInvitationGadgetDelegate-Protocol.h>

@class NSMutableArray, NSString, PXFeedSectionInfosManager;

@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate>
{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    NSUInteger _estimatedGadgetCount;
    NSString *_invitationAlbumCloudGUID;
    NSMutableArray *_delayedChanges;
    long long _maxNumberOfSections;
}

@property(readonly, nonatomic) long long maxNumberOfSections; // @synthesize maxNumberOfSections=_maxNumberOfSections;
@property(retain, nonatomic) NSMutableArray *delayedChanges; // @synthesize delayedChanges=_delayedChanges;
@property(retain, nonatomic) NSString *invitationAlbumCloudGUID; // @synthesize invitationAlbumCloudGUID=_invitationAlbumCloudGUID;
@property(nonatomic) NSUInteger estimatedGadgetCount; // @synthesize estimatedGadgetCount=_estimatedGadgetCount;
@property(retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // @synthesize feedSectionInfosManager=_feedSectionInfosManager;
// - (void).cxx_destruct;
- (void)_update:(id)arg1;
- (id)_gadgetsForSectionIndexes:(id)arg1;
- (id)_indexesOfSectionInfosToDisplay:(NSUInteger)arg1;
- (NSUInteger)_indexForGadget:(id)arg1;
- (void)_processDelayedChangesImmediatelyIfNecessary:(id)arg1;
- (void)_processDelayedChanges;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)gadget:(id)arg1 didAccept:(BOOL)arg2;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)dealloc;
- (id)init;

@end

