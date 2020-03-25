//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCInterestToken, NSArray, NSDictionary;

@interface FCHeldRecords : NSObject
{
    NSDictionary *_recordsByID;
    NSDictionary *_interestTokensByID;
}

+ (id)heldRecordsByMerging:(id)arg1 with:(id)arg2;
@property(readonly, nonatomic) NSDictionary *interestTokensByID; // @synthesize interestTokensByID=_interestTokensByID;
@property(readonly, nonatomic) NSDictionary *recordsByID; // @synthesize recordsByID=_recordsByID;
// - (void).cxx_destruct;
- (id)heldRecordsForIDs:(id)arg1;
- (id)heldRecordsPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)interestTokenForID:(id)arg1;
- (id)recordWithID:(id)arg1;
- (id)transformRecordsByIDWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)transformRecordsInOrder:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)transformRecordsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateRecordsAndInterestTokensWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSArray *allRecords;
@property(readonly, nonatomic) NSArray *allRecordIDs;
@property(readonly, nonatomic) FCInterestToken *onlyInterestToken;
@property(readonly, nonatomic) id onlyRecord;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2;

@end

