/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


        /**
         * adb_TransportParameter.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_TransportParameter.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = TransportParameter
                 * Namespace URI = http://util.transports.core.carbon.wso2.org/xsd
                 * Namespace Prefix = ns1
                 */
           


        struct adb_TransportParameter
        {
            axis2_char_t *property_Type;

            axis2_char_t* property_name;

                
                axis2_bool_t is_valid_name;
            axis2_char_t* property_paramElement;

                
                axis2_bool_t is_valid_paramElement;
            axis2_char_t* property_value;

                
                axis2_bool_t is_valid_value;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_TransportParameter_t* AXIS2_CALL
        adb_TransportParameter_create(
            const axutil_env_t *env)
        {
            adb_TransportParameter_t *_TransportParameter = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _TransportParameter = (adb_TransportParameter_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_TransportParameter_t));

            if(NULL == _TransportParameter)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_TransportParameter, 0, sizeof(adb_TransportParameter_t));

            _TransportParameter->property_Type = axutil_strdup(env, "adb_TransportParameter");
            _TransportParameter->property_name  = NULL;
                  _TransportParameter->is_valid_name  = AXIS2_FALSE;
            _TransportParameter->property_paramElement  = NULL;
                  _TransportParameter->is_valid_paramElement  = AXIS2_FALSE;
            _TransportParameter->property_value  = NULL;
                  _TransportParameter->is_valid_value  = AXIS2_FALSE;
            

            return _TransportParameter;
        }

        adb_TransportParameter_t* AXIS2_CALL
        adb_TransportParameter_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _name,
                axis2_char_t* _paramElement,
                axis2_char_t* _value)
        {
            adb_TransportParameter_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_TransportParameter_create(env);

            
              status = adb_TransportParameter_set_name(
                                     adb_obj,
                                     env,
                                     _name);
              if(status == AXIS2_FAILURE) {
                  adb_TransportParameter_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_TransportParameter_set_paramElement(
                                     adb_obj,
                                     env,
                                     _paramElement);
              if(status == AXIS2_FAILURE) {
                  adb_TransportParameter_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_TransportParameter_set_value(
                                     adb_obj,
                                     env,
                                     _value);
              if(status == AXIS2_FAILURE) {
                  adb_TransportParameter_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_TransportParameter_free_popping_value(
                        adb_TransportParameter_t* _TransportParameter,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _TransportParameter->property_name;

                    _TransportParameter->property_name = (axis2_char_t*)NULL;
                    adb_TransportParameter_free(_TransportParameter, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_TransportParameter_free(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _TransportParameter,
                env,
                "adb_TransportParameter");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransportParameter_free_obj(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);

            if (_TransportParameter->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _TransportParameter->property_Type);
            }

            adb_TransportParameter_reset_name(_TransportParameter, env);
            adb_TransportParameter_reset_paramElement(_TransportParameter, env);
            adb_TransportParameter_reset_value(_TransportParameter, env);
            

            if(_TransportParameter)
            {
                AXIS2_FREE(env->allocator, _TransportParameter);
                _TransportParameter = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_TransportParameter_deserialize(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _TransportParameter,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_TransportParameter");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransportParameter_deserialize_obj(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for TransportParameter : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building name element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "name", "http://util.transports.core.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_TransportParameter_set_name(_TransportParameter, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for name ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building paramElement element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "paramElement", "http://util.transports.core.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_TransportParameter_set_paramElement(_TransportParameter, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for paramElement ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building value element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "value", "http://util.transports.core.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_TransportParameter_set_value(_TransportParameter, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for value ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_TransportParameter_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_TransportParameter_declare_parent_namespaces(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_TransportParameter_serialize(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_TransportParameter == NULL)
            {
                return adb_TransportParameter_serialize_obj(
                    _TransportParameter, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _TransportParameter, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_TransportParameter");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_TransportParameter_serialize_obj(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _TransportParameter, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"TransportParameter\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://util.transports.core.carbon.wso2.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "TransportParameter", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.transports.core.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.transports.core.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.transports.core.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_TransportParameter->is_valid_name)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("name"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("name")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing name element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _TransportParameter->property_name;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.transports.core.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.transports.core.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.transports.core.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_TransportParameter->is_valid_paramElement)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("paramElement"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("paramElement")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing paramElement element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sparamElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sparamElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _TransportParameter->property_paramElement;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.transports.core.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.transports.core.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.transports.core.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_TransportParameter->is_valid_value)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("value"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("value")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing value element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%svalue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%svalue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _TransportParameter->property_value;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_3_temp = axutil_xml_quote_string(env, text_value_3, AXIS2_TRUE);
                           if (text_value_3_temp)
                           {
                               axutil_stream_write(stream, env, text_value_3_temp, axutil_strlen(text_value_3_temp));
                               AXIS2_FREE(env->allocator, text_value_3_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for name by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_TransportParameter_get_property1(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env)
            {
                return adb_TransportParameter_get_name(_TransportParameter,
                                             env);
            }

            /**
             * getter for name.
             */
            axis2_char_t* AXIS2_CALL
            adb_TransportParameter_get_name(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransportParameter, NULL);
                  

                return _TransportParameter->property_name;
             }

            /**
             * setter for name
             */
            axis2_status_t AXIS2_CALL
            adb_TransportParameter_set_name(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_name)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);
                
                if(_TransportParameter->is_valid_name &&
                        arg_name == _TransportParameter->property_name)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_TransportParameter_reset_name(_TransportParameter, env);

                
                if(NULL == arg_name)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransportParameter->property_name = (axis2_char_t *)axutil_strdup(env, arg_name);
                        if(NULL == _TransportParameter->property_name)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for name");
                            return AXIS2_FAILURE;
                        }
                        _TransportParameter->is_valid_name = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for name
            */
           axis2_status_t AXIS2_CALL
           adb_TransportParameter_reset_name(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);
               

               
            
                
                if(_TransportParameter->property_name != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _TransportParameter->property_name);
                     _TransportParameter->property_name = NULL;
                }
            
                
                
                _TransportParameter->is_valid_name = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether name is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransportParameter_is_name_nil(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_TRUE);
               
               return !_TransportParameter->is_valid_name;
           }

           /**
            * Set name to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransportParameter_set_name_nil(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               return adb_TransportParameter_reset_name(_TransportParameter, env);
           }

           

            /**
             * Getter for paramElement by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_TransportParameter_get_property2(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env)
            {
                return adb_TransportParameter_get_paramElement(_TransportParameter,
                                             env);
            }

            /**
             * getter for paramElement.
             */
            axis2_char_t* AXIS2_CALL
            adb_TransportParameter_get_paramElement(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransportParameter, NULL);
                  

                return _TransportParameter->property_paramElement;
             }

            /**
             * setter for paramElement
             */
            axis2_status_t AXIS2_CALL
            adb_TransportParameter_set_paramElement(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_paramElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);
                
                if(_TransportParameter->is_valid_paramElement &&
                        arg_paramElement == _TransportParameter->property_paramElement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_TransportParameter_reset_paramElement(_TransportParameter, env);

                
                if(NULL == arg_paramElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransportParameter->property_paramElement = (axis2_char_t *)axutil_strdup(env, arg_paramElement);
                        if(NULL == _TransportParameter->property_paramElement)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for paramElement");
                            return AXIS2_FAILURE;
                        }
                        _TransportParameter->is_valid_paramElement = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for paramElement
            */
           axis2_status_t AXIS2_CALL
           adb_TransportParameter_reset_paramElement(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);
               

               
            
                
                if(_TransportParameter->property_paramElement != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _TransportParameter->property_paramElement);
                     _TransportParameter->property_paramElement = NULL;
                }
            
                
                
                _TransportParameter->is_valid_paramElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether paramElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransportParameter_is_paramElement_nil(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_TRUE);
               
               return !_TransportParameter->is_valid_paramElement;
           }

           /**
            * Set paramElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransportParameter_set_paramElement_nil(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               return adb_TransportParameter_reset_paramElement(_TransportParameter, env);
           }

           

            /**
             * Getter for value by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_TransportParameter_get_property3(
                adb_TransportParameter_t* _TransportParameter,
                const axutil_env_t *env)
            {
                return adb_TransportParameter_get_value(_TransportParameter,
                                             env);
            }

            /**
             * getter for value.
             */
            axis2_char_t* AXIS2_CALL
            adb_TransportParameter_get_value(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransportParameter, NULL);
                  

                return _TransportParameter->property_value;
             }

            /**
             * setter for value
             */
            axis2_status_t AXIS2_CALL
            adb_TransportParameter_set_value(
                    adb_TransportParameter_t* _TransportParameter,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_value)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);
                
                if(_TransportParameter->is_valid_value &&
                        arg_value == _TransportParameter->property_value)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_TransportParameter_reset_value(_TransportParameter, env);

                
                if(NULL == arg_value)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransportParameter->property_value = (axis2_char_t *)axutil_strdup(env, arg_value);
                        if(NULL == _TransportParameter->property_value)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for value");
                            return AXIS2_FAILURE;
                        }
                        _TransportParameter->is_valid_value = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for value
            */
           axis2_status_t AXIS2_CALL
           adb_TransportParameter_reset_value(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_FAILURE);
               

               
            
                
                if(_TransportParameter->property_value != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _TransportParameter->property_value);
                     _TransportParameter->property_value = NULL;
                }
            
                
                
                _TransportParameter->is_valid_value = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether value is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransportParameter_is_value_nil(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransportParameter, AXIS2_TRUE);
               
               return !_TransportParameter->is_valid_value;
           }

           /**
            * Set value to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransportParameter_set_value_nil(
                   adb_TransportParameter_t* _TransportParameter,
                   const axutil_env_t *env)
           {
               return adb_TransportParameter_reset_value(_TransportParameter, env);
           }

           

