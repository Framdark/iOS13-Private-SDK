//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CKContextClient, NSDictionary, NSNumber, NSString;

@interface CKContextRequest : NSObject <NSSecureCoding>
{
    CKContextClient *_client;
    BOOL _textIsRaw;
    BOOL _includeHigherLevelTopics;
    BOOL _prepareOnly;
    BOOL _debug;
    BOOL _dontSkip;
    BOOL _timing;
    BOOL _incPending;
    int _overrideConstellationMinCount;
    int _overrideConstellationMinWeight;
    unsigned int _topk;
    NSString *_text;
    NSString *_title;
    NSString *_contentDescription;
    NSString *_contentKeywords;
    NSString *_contentAuthor;
    NSString *_url;
    NSString *_languageTag;
    NSDictionary *_itemIds;
    long long _maxConstellationTopics;
    NSNumber *_overrideBlendAlpha;
    NSNumber *_overrideBlendBeta;
    NSNumber *_overrideBlendGamma;
    NSUInteger _type;
}

+ (id)frameworkStartDate;
+ (id)requestServiceSemaphore;
+ (void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(NSUInteger)arg2 completionLength:(NSUInteger)arg3 requestType:(NSUInteger)arg4 logType:(NSUInteger)arg5;
+ (void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(NSUInteger)arg3 inputLength:(NSUInteger)arg4 completionLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7;
+ (void)logResultsShownForResponseId:(id)arg1 shown:(NSUInteger)arg2 couldHaveShown:(NSUInteger)arg3 serverOverride:(BOOL)arg4 inputLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7;
+ (BOOL)shutdownService;
+ (BOOL)pingService;
+ (id)requestWithText:(id)arg1;
+ (id)trimTextToSize:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)portraitBlacklistWithReply:(id /* CDUnknownBlockType */)arg1;
+ (void)statusWithReply:(id /* CDUnknownBlockType */)arg1;
+ (void)findResponseByID:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
+ (void)prepareRequestForText:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
+ (void)warmUpForRequestType:(NSUInteger)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
+ (void)runOffMainThread:(id /* CDUnknownBlockType */)arg1;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(NSUInteger)arg3 withReply:(id /* CDUnknownBlockType */)arg4;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(id /* CDUnknownBlockType */)arg3;
+ (void)findResultsForText:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
+ (void)setDefaultRequestType:(NSUInteger)arg1;
+ (void)initialize;
+ (id)new;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) BOOL incPending; // @synthesize incPending=_incPending;
@property(nonatomic) unsigned int topk; // @synthesize topk=_topk;
@property(nonatomic) int overrideConstellationMinWeight; // @synthesize overrideConstellationMinWeight=_overrideConstellationMinWeight;
@property(nonatomic) int overrideConstellationMinCount; // @synthesize overrideConstellationMinCount=_overrideConstellationMinCount;
@property(retain, nonatomic) NSNumber *overrideBlendGamma; // @synthesize overrideBlendGamma=_overrideBlendGamma;
@property(retain, nonatomic) NSNumber *overrideBlendBeta; // @synthesize overrideBlendBeta=_overrideBlendBeta;
@property(retain, nonatomic) NSNumber *overrideBlendAlpha; // @synthesize overrideBlendAlpha=_overrideBlendAlpha;
@property(nonatomic) BOOL timing; // @synthesize timing=_timing;
@property(nonatomic) BOOL dontSkip; // @synthesize dontSkip=_dontSkip;
@property(nonatomic) BOOL debug; // @synthesize debug=_debug;
@property(nonatomic) BOOL prepareOnly; // @synthesize prepareOnly=_prepareOnly;
@property(nonatomic) long long maxConstellationTopics; // @synthesize maxConstellationTopics=_maxConstellationTopics;
@property(retain, nonatomic) NSDictionary *itemIds; // @synthesize itemIds=_itemIds;
@property(nonatomic) BOOL includeHigherLevelTopics; // @synthesize includeHigherLevelTopics=_includeHigherLevelTopics;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic, setter=setContentAuthor:) NSString *contentAuthor; // @synthesize contentAuthor=_contentAuthor;
@property(retain, nonatomic, setter=setContentKeywords:) NSString *contentKeywords; // @synthesize contentKeywords=_contentKeywords;
@property(retain, nonatomic, setter=setContentDescription:) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(retain, nonatomic, setter=setTitle:) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL textIsRaw; // @synthesize textIsRaw=_textIsRaw;
@property(retain, nonatomic, setter=setText:) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (void)_executeWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)_postProcessResponse:(id)arg1;
- (id)execute;
- (void)executeWithReply:(id /* CDUnknownBlockType */)arg1;
- (id)initForClient:(id)arg1;
- (id)initWithText:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)capabilitiesWithReply:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
