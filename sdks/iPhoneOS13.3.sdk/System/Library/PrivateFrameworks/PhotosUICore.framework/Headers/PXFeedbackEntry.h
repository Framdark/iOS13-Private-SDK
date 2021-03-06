//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface PXFeedbackEntry : NSObject <NSSecureCoding>
{
    NSDictionary *_feedbackItemDetails;
    BOOL _alreadyCollected;
    NSMutableDictionary *_feedbackItemsDict;
    long long _generalFeedback;
    NSString *_systemID;
    NSDate *_timestamp;
    NSString *_appVersion;
}

+ (id)createFakeTestFeedbackDictionary;
+ (id)createFakeTestEntry;
+ (id)negativeFeedbackForImageQualityKeys;
+ (id)positiveFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForAutoLoopKeys;
+ (id)positiveFeedbackForAutoLoopKeys;
+ (id)negativeFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveFeedbackForMemoryDetailsKeys;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) BOOL alreadyCollected; // @synthesize alreadyCollected=_alreadyCollected;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *systemID; // @synthesize systemID=_systemID;
@property(nonatomic) long long generalFeedback; // @synthesize generalFeedback=_generalFeedback;
@property(retain, nonatomic) NSMutableDictionary *feedbackItemsDict; // @synthesize feedbackItemsDict=_feedbackItemsDict;
// - (void).cxx_destruct;
- (id)longDescription;
- (id)asTextForItemKey:(id)arg1;
- (id)osKeyForItemKey:(id)arg1;
- (BOOL)userLikedResults;
- (id)uniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemID:(id)arg1 timestamp:(id)arg2;
- (id)init;

@end

