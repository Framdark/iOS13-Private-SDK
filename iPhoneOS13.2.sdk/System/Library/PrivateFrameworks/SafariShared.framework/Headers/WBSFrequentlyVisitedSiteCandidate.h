//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject
{
    float _score;
    WBSHistoryItem *_historyItem;
}

+ (id)titleForHistoryItem:(id)arg1;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) WBSHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
- (id)initWithHistoryItem:(id)arg1 score:(float)arg2;

@end
