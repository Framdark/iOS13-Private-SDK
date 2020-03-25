//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PREResponsesGeneratedEvent : NSObject
{
    BOOL _isCached;
    BOOL _hasQuestionMark;
    int _generationStatus;
    NSArray *_responses;
    NSString *_language;
    NSString *_locale;
    NSUInteger _responseTimePerf;
    NSUInteger _messageCharCount;
    NSUInteger _responseGenerationTime;
}

@property(nonatomic) int generationStatus; // @synthesize generationStatus=_generationStatus;
@property(nonatomic) NSUInteger responseGenerationTime; // @synthesize responseGenerationTime=_responseGenerationTime;
@property(nonatomic) BOOL hasQuestionMark; // @synthesize hasQuestionMark=_hasQuestionMark;
@property(nonatomic) NSUInteger messageCharCount; // @synthesize messageCharCount=_messageCharCount;
@property(nonatomic) NSUInteger responseTimePerf; // @synthesize responseTimePerf=_responseTimePerf;
@property(nonatomic) BOOL isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
// - (void).cxx_destruct;

@end
