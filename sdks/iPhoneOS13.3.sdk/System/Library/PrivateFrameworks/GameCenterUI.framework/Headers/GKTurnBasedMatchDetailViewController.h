//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBasicCollectionViewController.h>

@class GKGame, GKTurnBasedMatch, GKTurnBasedMatchDetailHeaderView, GKTurnBasedParticipantsDataSource, NSObject;
@protocol GKTurnBasedMatchDetailViewControllerDelegate;

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController
{
    BOOL _isInGame;
    BOOL _shouldShowPlay;
    BOOL _shouldShowQuit;
    BOOL _didFloatInBubbles;
    BOOL _isCompactHeader;
    NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *_delegateWeak;
    GKTurnBasedMatch *_match;
    GKGame *_game;
    GKTurnBasedParticipantsDataSource *_participantsDataSource;
    GKTurnBasedMatchDetailHeaderView *_headerView;
}

@property(nonatomic) BOOL isCompactHeader; // @synthesize isCompactHeader=_isCompactHeader;
@property(nonatomic) BOOL didFloatInBubbles; // @synthesize didFloatInBubbles=_didFloatInBubbles;
@property(retain, nonatomic) GKTurnBasedMatchDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKTurnBasedParticipantsDataSource *participantsDataSource; // @synthesize participantsDataSource=_participantsDataSource;
@property(nonatomic) BOOL shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) BOOL shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(nonatomic) BOOL isInGame; // @synthesize isInGame=_isInGame;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (id)_gkRepresentedObject;
- (void)buyButtonPressed:(id)arg1;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)quitMatch:(id)arg1;
- (void)chooseMatch:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)setActionButtonEnabled:(BOOL)arg1;
- (void)setupActionButton;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)animateOutBubbleWithFocus:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)floatInBubbles;
- (void)didUpdateModel;
- (void)setNeedsFloatInBubbles;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHeader;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didEnterNoContentState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)configureMatchDetailHeader:(id)arg1;
- (void)configureViewFactories;
- (void)configureDataSource;
@property(nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)init;

@end

