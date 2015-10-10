#import <Foundation/Foundation.h>
#import "SWGWordList.h"



@interface SWGWordListsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGWordListsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 Creates a WordList.
 
 @param body WordList to create
 @param auth_token The auth token of the logged-in user, obtained by calling /account.{format}/authenticate/{username} (described above)
 */
-(NSNumber*) createWordListWithCompletionBlock :(SWGWordList*) body 
        auth_token:(NSString*) auth_token 
        completionHandler: (void (^)(SWGWordList* output, NSError* error))completionBlock;

@end
