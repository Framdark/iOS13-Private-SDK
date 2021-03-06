//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSMapTable, NSMutableSet, NSString, TSPComponentExternalReferenceMap, TSPComponentObjectUUIDMap, TSPObject, TSPObjectReferenceMap;
@protocol OS_dispatch_queue, TSPComponentDelegate;

__attribute__((visibility("hidden")))
@interface TSPComponent : NSObject <NSDiscardableContent>
{
    _Atomic int _accessCount;
    id <TSPComponentDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _identifier;
    NSString *_preferredLocator;
    NSString *_locator;
    NSUInteger _readVersion;
    NSUInteger _writeVersion;
    NSUInteger _parseVersion;
    NSUInteger _requiredVersion;
    BOOL _canBeDropped;
    long long _compressionAlgorithm;
    NSArray *_featureInfos;
    NSUInteger _saveToken;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    NSMapTable *_writtenObjects;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSMutableSet *_dataReferences;
    struct {
        unsigned int usesDelayedArchiving:1;
        unsigned int modified:1;
        unsigned int persisted:1;
        unsigned int isStoredOutsideObjectArchive:1;
        unsigned int packageIdentifier:2;
        unsigned int discarded:1;
    } _flags;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    NSUInteger _encodedLength;
    NSDate *_lastModificationDate;
    TSPObjectReferenceMap *_objectReferenceMap;
}

+ (id)componentsDiscardingContentOnCurrentThread;
@property(readonly, nonatomic) TSPObjectReferenceMap *objectReferenceMap; // @synthesize objectReferenceMap=_objectReferenceMap;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) NSUInteger encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // @synthesize componentObjectUUIDMap=_componentObjectUUIDMap;
@property(readonly, nonatomic) NSArray *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUInteger saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) long long compressionAlgorithm; // @synthesize compressionAlgorithm=_compressionAlgorithm;
@property(readonly, nonatomic) BOOL canBeDropped; // @synthesize canBeDropped=_canBeDropped;
@property(readonly, nonatomic) NSUInteger requiredVersion; // @synthesize requiredVersion=_requiredVersion;
@property(readonly, nonatomic) NSUInteger parseVersion; // @synthesize parseVersion=_parseVersion;
@property(readonly, nonatomic) NSUInteger writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) NSUInteger readVersion; // @synthesize readVersion=_readVersion;
// - (void).cxx_destruct;
- (id)description;
- (id)additionalDescription;
- (void)enumerateDataReferences:(id /* CDUnknownBlockType */)arg1;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (BOOL)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(BOOL)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (void)enumerateExternalReferences:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL isTransientComponent;
@property(readonly) BOOL needsArchiving;
- (BOOL)needsArchivingImpl;
@property(readonly) BOOL persisted;
- (void)markAsDiscarded;
- (void)willDiscardComponent;
- (void)setReadVersion:(NSUInteger)arg1 writeVersion:(NSUInteger)arg2 componentObjectUUIDMap:(id)arg3;
- (void)setEncodedLength:(NSUInteger)arg1 lastModificationDate:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(BOOL)arg4 parseVersion:(NSUInteger)arg5 requiredVersion:(NSUInteger)arg6 canBeDropped:(BOOL)arg7 compressionAlgorithm:(long long)arg8 rootObjectOrNil:(id)arg9 archivedObjects:(id)arg10 externalReferenceMap:(id)arg11 dataReferences:(id)arg12 readVersion:(NSUInteger)arg13 writeVersion:(NSUInteger)arg14 featureInfos:(id)arg15 componentObjectUUIDMap:(id)arg16 objectReferenceMap:(id)arg17 saveToken:(NSUInteger)arg18 encodedLength:(NSUInteger)arg19 lastModificationDate:(id)arg20 wasCopied:(BOOL)arg21 wasModifiedDuringWrite:(BOOL)arg22;
- (void)didReadObjects:(id)arg1;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setModifiedImpl:(BOOL)arg1 forObject:(id)arg2;
- (void)setModified:(BOOL)arg1 forObject:(id)arg2 isDocumentUpgrade:(BOOL)arg3;
- (void)setModified:(BOOL)arg1 forObject:(id)arg2;
@property(readonly) BOOL modified;
@property(readonly) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *locator;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossibleFromNSCache:(BOOL)arg1;
- (void)discardContentIfPossible;
- (void)performSynchronousDiscardContentIfPossibleUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)continueDiscardingContentIfPossibleUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isDiscardingContent;
@property(retain) TSPObject *rootObject;
- (BOOL)shouldKeepStrongObjectImpl;
@property(readonly, nonatomic) BOOL incompatibleVersion;
@property(readonly, nonatomic) BOOL isStoredOutsideObjectArchive;
- (BOOL)shouldForceCaching;
- (BOOL)isCachingEnabled;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo )arg2 packageIdentifier:(unsigned char)arg3 encodedLength:(NSUInteger)arg4 lastModificationDate:(id)arg5;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(BOOL)arg5 parseVersion:(NSUInteger)arg6 requiredVersion:(NSUInteger)arg7 canBeDropped:(BOOL)arg8 compressionAlgorithm:(long long)arg9 encodedLength:(NSUInteger)arg10 lastModificationDate:(id)arg11;
- (id)init;
- (void)saveToMessage:(struct ComponentInfo )arg1 saveToken:(NSUInteger)arg2 writtenComponentInfo:(const struct WrittenComponentInfo )arg3;

@end

