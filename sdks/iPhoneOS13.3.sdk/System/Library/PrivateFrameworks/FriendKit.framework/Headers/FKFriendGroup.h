//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol FKFriendGroupDelegate;

@interface FKFriendGroup : NSObject
{
    NSMutableArray *_friendsManager;
    NSUInteger _groupSize;
    NSString *_title;
    NSUInteger _selectedPosition;
    id <FKFriendGroupDelegate> _delegate;
}

@property(nonatomic) __weak id <FKFriendGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger selectedPosition; // @synthesize selectedPosition=_selectedPosition;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)displayNameForGroupWithSeparator:(id)arg1;
- (long long)_firstEmptyPosition;
- (id)friends;
- (void)setFriends:(id)arg1;
- (void)removeFriendAtPosition:(NSUInteger)arg1;
- (void)setFriend:(id)arg1 atPosition:(NSUInteger)arg2 error:(unsigned int )arg3;
- (void)addFriend:(id)arg1 error:(unsigned int )arg2;
- (BOOL)isFull;
- (NSUInteger)count;
- (BOOL)containsFriend:(id)arg1;
- (NSUInteger)positionOfFriend:(id)arg1;
- (id)friendAtPosition:(NSUInteger)arg1;
- (id)initWithDelegate:(id)arg1 groupSize:(NSUInteger)arg2;
- (id)initWithGroupSize:(NSUInteger)arg1;
- (id)init;

@end

