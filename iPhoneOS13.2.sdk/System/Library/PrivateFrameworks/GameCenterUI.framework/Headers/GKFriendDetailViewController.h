//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, GKPlayer, UILabel;

@interface GKFriendDetailViewController : GKDetailViewController
{
    GKDashboardPlayerPhotoView *_playerView;
    UILabel *_nicknameLabel;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
- (void)report:(id)arg1;
- (void)configureView;
- (void)viewDidLoad;
- (id)initWithPlayer:(id)arg1;

@end
