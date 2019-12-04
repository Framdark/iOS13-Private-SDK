//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCHeadlinesUpdateOperation : FCOperation
{
    NSArray *_headlines;
    id <FCContentContext> _context;
    id <FCCoreConfiguration> _configuration;
    double _maxArticleAge;
    id /* block */ _updateCompletion;
    NSDictionary *_resultHeadlinesByArticleID;
}

@property(copy, nonatomic) NSDictionary *resultHeadlinesByArticleID; // @synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID;
@property(copy, nonatomic) id /* block */ updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(nonatomic) double maxArticleAge; // @synthesize maxArticleAge=_maxArticleAge;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end
