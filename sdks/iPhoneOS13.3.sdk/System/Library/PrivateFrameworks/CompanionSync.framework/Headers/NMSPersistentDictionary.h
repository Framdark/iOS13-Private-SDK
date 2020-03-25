//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, _SYSharedServiceDB;
@protocol OS_dispatch_semaphore;

@interface NMSPersistentDictionary : NSObject <NSLocking>
{
    Class _objectClass;
    NSString *_path;
    struct __CFString _loggingFacility;
    NSObject<OS_dispatch_semaphore> *_lock;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3 _db;
    struct sqlite3_stmt _fetch;
    struct sqlite3_stmt _insert;
    struct sqlite3_stmt _reset;
    struct sqlite3_stmt _remove;
    struct sqlite3_stmt _removeAll;
    struct sqlite3_stmt _byDate;
    struct sqlite3_stmt _byEnqueueDate;
}

// - (void).cxx_destruct;
- (void)enumerateObjectsSortedByEnqueueDate:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateObjectsSortedByExpirationDate:(id /* CDUnknownBlockType */)arg1;
- (void)removeAllObjects;
- (void)resetObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3;
- (id)_dataFromObject:(id)arg1;
- (id)_objectFromData:(id)arg1;
- (void)_prepareStatements;
- (void)_ensureDBSchema;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (NSUInteger)_checkSchemaVersion;
- (void)_withDB:(id /* CDUnknownBlockType */)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2;
- (id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(struct __CFString )arg3;
- (id)init;

@end

