/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSURL;

@interface AFHTTPClient : NSObject
{
    NSURL *_baseURL;
    unsigned int _stringEncoding;
    int _parameterEncoding;
    NSMutableArray *_registeredHTTPOperationClassNames;
    NSMutableDictionary *_defaultHeaders;
    NSOperationQueue *_operationQueue;
}

+ (id)clientWithBaseURL:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(retain, nonatomic) NSMutableArray *registeredHTTPOperationClassNames; // @synthesize registeredHTTPOperationClassNames=_registeredHTTPOperationClassNames;
@property(nonatomic) int parameterEncoding; // @synthesize parameterEncoding=_parameterEncoding;
@property(nonatomic) unsigned int stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)patchPath:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(void)arg4;
- (void)deletePath:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(void)arg4;
- (void)putPath:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(void)arg4;
- (void)postPath:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(void)arg4;
- (void)getPath:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(void)arg4;
- (void)enqueueBatchOfHTTPRequestOperations:(id)arg1 progressBlock:(id)arg2 completionBlock:(void)arg3;
- (void)enqueueBatchOfHTTPRequestOperationsWithRequests:(id)arg1 progressBlock:(id)arg2 completionBlock:(void)arg3;
- (void)cancelAllHTTPOperationsWithMethod:(id)arg1 path:(id)arg2;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(id)arg2 failure:(void)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(id)arg4;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (void)clearAuthorizationHeader;
- (void)setAuthorizationHeaderWithToken:(id)arg1;
- (void)setAuthorizationHeaderWithUsername:(id)arg1 password:(id)arg2;
- (void)setDefaultHeader:(id)arg1 value:(id)arg2;
- (id)defaultValueForHeader:(id)arg1;
- (void)unregisterHTTPOperationClass:(Class)arg1;
- (BOOL)registerHTTPOperationClass:(Class)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1;

@end
