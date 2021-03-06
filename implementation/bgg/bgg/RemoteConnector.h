//
//  RemoteConnector.h
//  Hole19App
//
//  Created by João Caxaria on 2/15/11.
//  Copyright 2011 Imaginary Factory. All rights reserved.
//

#import <Foundation/Foundation.h>

#define timeout 20.0

@interface RemoteConnector : NSObject {
	NSMutableDictionary* flagDictionary;
}

+(NSString*) server;
-(NSDictionary*) generateResult:(id) data :(NSString*) key;

-(NSString*) getRawRequest:(NSString*)url;
-(NSString*) getRawRequest:(NSString*)url target:(id) target selector:(SEL)selector;

@end


